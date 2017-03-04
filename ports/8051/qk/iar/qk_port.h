/**
* @file
* @brief QK/C port to 8051, IAR-ARM toolset
* @cond
******************************************************************************
* Last Updated for Version: 5.8.2
* Date of the Last Update:  2017-03-04
*
* This program is open source software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published
* by the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
*
* Contact information:
* Email: woodsking2@hotmail.com
******************************************************************************
* @endcond
*/
#ifndef qk_port_h
#define qk_port_h

/* QK-nano function to emulate return from interrupt, see NOTE03 */
__near_func void QK_eoi_(void);

/* QK interrupt entry and exit */
#define QK_ISR_ENTRY()  ++QK_attr_.intNest

#define QK_ISR_EXIT()  do { \
    QF_INT_DISABLE(); \
    if (QK_sched_() != (uint_fast8_t)0) { \
        QK_eoi_(); \
        --QK_attr_.intNest; \
        QK_activate_();\
    } \
    QF_INT_ENABLE(); \
} while (0)

#include "qk.h" /* QK platform-independent public interface */

/*****************************************************************************
* NOTE01:
* 8051 performs interrupt prioritization from interrupt entry to the RETI
* instruction. In QK-nano, the last nested interrupt (which returns to
* the task level) must perform the asynchronous preemption(s), that is,
* it needs to descend to the task-level and allow any interrupt to preempt
* the task level. The QK_eoi_() function issues an extra RETI instruction
* to end the interrupt-in-progress and emulate discending to the task level
* without actually returning to the interrupted task, which remains preempted
* until the QK-nano scheduler returns and the original interrupt returns.
*/
#endif /* qk_port_h */
