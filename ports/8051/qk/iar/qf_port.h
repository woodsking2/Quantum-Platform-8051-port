/**
* @file
* @brief QF/C port to 8051, preemptive QK kernel, IAR-ARM toolset
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
#ifndef qf_port_h
#define qf_port_h

//! for ti cc2540/cc2541
#if defined( CC2541) || defined( CC2541S )
#include <ioCC2541.h>
#else // CC2540
#include <ioCC2540.h>
#endif // CC2541 || CC2541S

/* The maximum number of active objects in the application, see NOTE1 */
#define QF_MAX_ACTIVE           32

/* The maximum number of system clock tick rates */
#define QF_MAX_TICK_RATE        2

/* interrupt locking policy for cc2540/cc2541*/
#define QF_INT_DISABLE()       \
do  \
{   \
    EA = 0;  \
}while (0)

#define QF_INT_ENABLE()     \
do  \
{   \
    EA = 1;  \
}while (0)

/* QF critical section entry/exit... */
/* QF_CRIT_STAT_TYPE not defined: unconditional interrupt disabling" policy */
#define QF_CRIT_ENTRY(dummy)    QF_INT_DISABLE()
#define QF_CRIT_EXIT(dummy)     QF_INT_ENABLE()
#define QF_CRIT_EXIT_NOP()      

//#include <intrinsics.h> /* IAR intrinsic functions */
#include "qep_port.h"   /* QEP port */
#include "qk_port.h"    /* QK preemptive kernel port */
#include "qf.h"         /* QF platform-independent public interface */



#endif /* qf_port_h */
