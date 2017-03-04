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
#include <qf_port.h>
#include <qep_port.h>
#include <qk_port.h>

__near_func void QK_eoi_(void) {
    __asm("RETI");
}
