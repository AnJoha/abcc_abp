/*******************************************************************************
********************************************************************************
** Copyright 2012-present HMS Industrial Networks AB.
** Licensed under the MIT License.
********************************************************************************
********************************************************************************
**
** File Name
** ---------
**
** abp_cipid.h
**
********************************************************************************
********************************************************************************
**
** Description
** -----------
**
** ABP - Anybus-CC Protocol Definitions for CIP Identity Object.
**
** This file contains CIP identity specific definitions used by Anybus-CC CIP
** modules as well as applications designed to use such modules.
**
********************************************************************************
********************************************************************************
*/

#ifndef ABP_CIPID_H
#define ABP_CIPID_H


/*******************************************************************************
**
** Anybus-CC CIP Identity Object constants.
**
** Object revision: 1.
**
********************************************************************************
*/


/*------------------------------------------------------------------------------
**
** The Anybus-CC CIP Identity Object instance attributes.
**
**------------------------------------------------------------------------------
*/

#define ABP_CIPID_IA_VENDOR_ID                  1
#define ABP_CIPID_IA_DEVICE_TYPE                2
#define ABP_CIPID_IA_PRODUCT_CODE               3
#define ABP_CIPID_IA_REVISION                   4
#define ABP_CIPID_IA_STATUS                     5
#define ABP_CIPID_IA_SERIAL_NUMBER              6
#define ABP_CIPID_IA_PRODUCT_NAME               7


/*------------------------------------------------------------------------------
**
** The data size of the Anybus-CC CIP Identity Object instance attributes (in
** bytes).
**
**------------------------------------------------------------------------------
*/

#define ABP_CIPID_IA_VENDOR_ID_DS                    ABP_UINT16_SIZEOF
#define ABP_CIPID_IA_DEVICE_TYPE_DS                  ABP_UINT16_SIZEOF
#define ABP_CIPID_IA_PRODUCT_CODE_DS                 ABP_UINT16_SIZEOF
#define ABP_CIPID_IA_REVISION_DS                     ( 2 * ABP_UINT8_SIZEOF )
#define ABP_CIPID_IA_STATUS_DS                       ABP_UINT16_SIZEOF
#define ABP_CIPID_IA_SERIAL_NUMBER_DS                ABP_UINT32_SIZEOF
#define ABP_CIPID_IA_PRODUCT_NAME_MAX_DS             32


/*------------------------------------------------------------------------------
**
** The Anybus-CC CIP Identity Object specific message commands.
**
**------------------------------------------------------------------------------
*/

#define ABP_CIPID_CMD_GET_ATTRIBUTE_ALL              0x10


#endif  /* inclusion lock */

/*******************************************************************************
**
** End of abp_cipid.h
**
********************************************************************************
*/
