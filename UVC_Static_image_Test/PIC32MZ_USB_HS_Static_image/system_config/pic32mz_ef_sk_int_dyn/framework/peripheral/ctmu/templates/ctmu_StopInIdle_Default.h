/*******************************************************************************
  CTMU Peripheral Library Template Implementation

  File Name:
    ctmu_StopInIdle_Default.h

  Summary:
    CTMU PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : StopInIdle
    and its Variant : Default
    For following APIs :
        PLIB_CTMU_StopInIdleDisable
        PLIB_CTMU_StopInIdleEnable
        PLIB_CTMU_ExistsStopInIdle

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/

//DOM-IGNORE-END

#ifndef _CTMU_STOPINIDLE_DEFAULT_H
#define _CTMU_STOPINIDLE_DEFAULT_H

#include "ctmu_registers.h"

//******************************************************************************
/* Function :  CTMU_StopInIdleDisable_Default

  Summary:
    Implements Default variant of PLIB_CTMU_StopInIdleDisable

  Description:
    This template implements the Default variant of the PLIB_CTMU_StopInIdleDisable function.
*/

PLIB_TEMPLATE void CTMU_StopInIdleDisable_Default( CTMU_MODULE_ID index )
{
	volatile ctmu_registers_t *ctmu = ((ctmu_registers_t *)(index));
	ctmu->CTMUCONCLR = _CTMUCON_CTMUSIDL_MASK;
}


//******************************************************************************
/* Function :  CTMU_StopInIdleEnable_Default

  Summary:
    Implements Default variant of PLIB_CTMU_StopInIdleEnable

  Description:
    This template implements the Default variant of the PLIB_CTMU_StopInIdleEnable function.
*/

PLIB_TEMPLATE void CTMU_StopInIdleEnable_Default( CTMU_MODULE_ID index )
{
	volatile ctmu_registers_t *ctmu = ((ctmu_registers_t *)(index));
	ctmu->CTMUCONSET = _CTMUCON_CTMUSIDL_MASK;
}


//******************************************************************************
/* Function :  CTMU_ExistsStopInIdle_Default

  Summary:
    Implements Default variant of PLIB_CTMU_ExistsStopInIdle

  Description:
    This template implements the Default variant of the PLIB_CTMU_ExistsStopInIdle function.
*/

#define PLIB_CTMU_ExistsStopInIdle PLIB_CTMU_ExistsStopInIdle
PLIB_TEMPLATE bool CTMU_ExistsStopInIdle_Default( CTMU_MODULE_ID index )
{
    return true;
}


#endif /*_CTMU_STOPINIDLE_DEFAULT_H*/

/******************************************************************************
 End of File
*/

