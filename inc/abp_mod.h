/*******************************************************************************
********************************************************************************
** Copyright 2008-present HMS Industrial Networks AB.
** Licensed under the MIT License.
********************************************************************************
********************************************************************************
**
** File Name
** ---------
**
** abp_mod.h
**
********************************************************************************
********************************************************************************
**
** Description
** -----------
**
** ABP - Anybus-CC Protocol Definitions for Modbus.
**
** This file contains network specific definitions used by the Anybus-CC
** Modbus module as well as applications designed to use such module.
**
********************************************************************************
********************************************************************************
*/

#ifndef ABP_MOD_H
#define ABP_MOD_H


/*******************************************************************************
**
** Anybus-CC Modbus object constants.
**
** Object revision: 1.
**
********************************************************************************
*/

/*------------------------------------------------------------------------------
**
** The Anybus-CC Modbus Object instance attributes.
**
**------------------------------------------------------------------------------
*/

#define ABP_MOD_IA_VENDOR_NAME              1
#define ABP_MOD_IA_PRODUCT_CODE             2
#define ABP_MOD_IA_REVISION                 3
#define ABP_MOD_IA_VENDOR_URL               4
#define ABP_MOD_IA_PRODUCT_NAME             5
#define ABP_MOD_IA_MODEL_NAME               6
#define ABP_MOD_IA_USER_APP_NAME            7
#define ABP_MOD_IA_DEVICE_ID                8
#define ABP_MOD_IA_ADI_INDEXING_BITS        9
#define ABP_MOD_IA_MESSAGE_FORWARDING       10
#define ABP_MOD_IA_RW_OFFSET                11
#define ABP_MOD_IA_DISABLE_DEVICE_ID_FC     12


/*------------------------------------------------------------------------------
**
** The data size of the Anybus-CC Modbus Object instance attributes (in
** bytes).
**
**------------------------------------------------------------------------------
*/

#define ABP_MOD_IA_ADI_INDEXING_BITS_DS            ABP_UINT8_SIZEOF
#define ABP_MOD_IA_MESSAGE_FORWARDING_DS           ABP_BOOL_SIZEOF
#define ABP_MOD_IA_RW_OFFSET_DS                    ( 2 * ABP_SINT16_SIZEOF )
#define ABP_MOD_IA_DISABLE_DEVICE_ID_FC_DS         ABP_BOOL_SIZEOF


/*------------------------------------------------------------------------------
**
** The Anybus-CC Modbus Object specific message commands.
**
**------------------------------------------------------------------------------
*/

#define ABP_MOD_CMD_PROCESS_MODBUS_MESSAGE         0x10

/*------------------------------------------------------------------------------
**
** Exception information codes.
**
**------------------------------------------------------------------------------
*/
#define ABP_MOD_NW_EXCPT_MISSING_MAC_ADDRESS 1

#endif  /* inclusion lock */

/*******************************************************************************
**
** End of abp_mod.h
**
********************************************************************************
*/
