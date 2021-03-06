/*******************************************************************************
  PTG Peripheral Library Template Implementation

  File Name:
    ptg_WDTStatus_Default.h

  Summary:
    PTG PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : WDTStatus
    and its Variant : Default
    For following APIs :
        PLIB_PTG_WDTStatusGet
        PLIB_PTG_WDTStatusClear
        PLIB_PTG_ExistsWDTStatus

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.

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

#ifndef _PTG_WDTSTATUS_DEFAULT_H
#define _PTG_WDTSTATUS_DEFAULT_H

//******************************************************************************
/* Function :  PTG_WDTStatusGet_Default

  Summary:
    Implements Default variant of PLIB_PTG_WDTStatusGet 

  Description:
    This template implements the Default variant of the PLIB_PTG_WDTStatusGet function.
*/

PLIB_TEMPLATE bool PTG_WDTStatusGet_Default( PTG_MODULE_ID index )
{
	return (bool) PTGCONbits.PTGWDTO;
}


//******************************************************************************
/* Function :  PTG_WDTStatusClear_Default

  Summary:
    Implements Default variant of PLIB_PTG_WDTStatusClear 

  Description:
    This template implements the Default variant of the PLIB_PTG_WDTStatusClear function.
*/

PLIB_TEMPLATE void PTG_WDTStatusClear_Default( PTG_MODULE_ID index )
{
	PTGCONbits.PTGWDTO = 0;
}


//******************************************************************************
/* Function :  PTG_ExistsWDTStatus_Default

  Summary:
    Implements Default variant of PLIB_PTG_ExistsWDTStatus

  Description:
    This template implements the Default variant of the PLIB_PTG_ExistsWDTStatus function.
*/

#define PLIB_PTG_ExistsWDTStatus PLIB_PTG_ExistsWDTStatus
PLIB_TEMPLATE bool PTG_ExistsWDTStatus_Default( PTG_MODULE_ID index )
{
    return true;
}


#endif /*_PTG_WDTSTATUS_DEFAULT_H*/

/******************************************************************************
 End of File
*/

