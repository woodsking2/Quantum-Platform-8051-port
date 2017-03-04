/**
* @file
* @brief QEP/C port, generic C99 compiler
* @ingroup ports
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
#ifndef qep_port_h
#define qep_port_h

typedef signed   char   int8_t;     //!< Signed 8 bit integer
typedef unsigned char   uint8_t;    //!< Unsigned 8 bit integer
typedef signed   short  int16_t;    //!< Signed 16 bit integer
typedef unsigned short  uint16_t;   //!< Unsigned 16 bit integer
typedef signed   long   int32_t;    //!< Signed 32 bit integer
typedef unsigned long   uint32_t;   //!< Unsigned 32 bit integer
typedef signed   char   int_fast8_t;     //!< Signed 8 bit integer
typedef unsigned char   uint_fast8_t;    //!< Unsigned 8 bit integer
typedef signed   short  int_fast16_t;    //!< Signed 16 bit integer
typedef unsigned short  uint_fast16_t;   //!< Unsigned 16 bit integer
typedef signed   long   int_fast32_t;    //!< Signed 32 bit integer
typedef unsigned long   uint_fast32_t;   //!< Unsigned 32 bit integer

typedef unsigned char   bool;     //!< Boolean data type
#ifndef false
    #define false (0)
#endif
#ifndef true
    #define true  (1)
#endif

#include "qep.h"     /* QEP platform-independent public interface */

#endif /* qep_port_h */
