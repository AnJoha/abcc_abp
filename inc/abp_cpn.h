/*******************************************************************************
********************************************************************************
** Copyright 2009-present HMS Industrial Networks AB.
** Licensed under the MIT License.
********************************************************************************
********************************************************************************
**
** File Name
** ---------
**
** abp_cpn.h
**
********************************************************************************
********************************************************************************
**
** Description
** -----------
**
** ABP - Anybus-CC Protocol Definitions for CompoNet Object.
**
** This file contains network specific definitions used by the Anybus-CC
** CompoNet module as well as applications designed to use such module.
**
********************************************************************************
********************************************************************************
**
** Company: HMS Industrial Networks AB
**          Stationsgatan 37
**          S-302 45  Halmstad
**          SWEDEN
**          Tel:     +46 (0)35 - 17 29 00
**          Fax:     +46 (0)35 - 17 29 09
**          e-mail:  info@hms.se
**
********************************************************************************
********************************************************************************
*/

#ifndef ABP_CPN_H
#define ABP_CPN_H


/*******************************************************************************
**
** Anybus-CC CompoNet object constants.
**
** Object revision: 1.
**
********************************************************************************
*/

/*------------------------------------------------------------------------------
**
** The Anybus-CC CompoNet Object instance attributes.
**
**------------------------------------------------------------------------------
*/

#define ABP_CPN_IA_VENDOR_ID                1
#define ABP_CPN_IA_DEVICE_TYPE              2
#define ABP_CPN_IA_PRODUCT_CODE             3
#define ABP_CPN_IA_REVISION                 4
#define ABP_CPN_IA_SERIAL_NUMBER            5
#define ABP_CPN_IA_PRODUCT_NAME             6
#define ABP_CPN_IA_PROD_INSTANCE            7
#define ABP_CPN_IA_CONS_INSTANCE            8
#define ABP_CPN_IA_ENABLE_APP_CIP_OBJECTS   11
#define ABP_CPN_IA_ENABLE_PARAM_OBJECT      12
#define ABP_CPN_IA_BIT_SLAVE                13


/*------------------------------------------------------------------------------
**
** The data size of the Anybus-CC CompoNet Object instance attributes (in
** bytes).
**
**------------------------------------------------------------------------------
*/

#define ABP_CPN_IA_VENDOR_ID_DS                    ABP_UINT16_SIZEOF
#define ABP_CPN_IA_DEVICE_TYPE_DS                  ABP_UINT16_SIZEOF
#define ABP_CPN_IA_PRODUCT_CODE_DS                 ABP_UINT16_SIZEOF
#define ABP_CPN_IA_REVISION_DS                     ( 2 * ABP_UINT8_SIZEOF )
#define ABP_CPN_IA_SERIAL_NUMBER_DS                ABP_UINT32_SIZEOF
#define ABP_CPN_IA_PROD_INSTANCE_DS                ABP_UINT16_SIZEOF
#define ABP_CPN_IA_CONS_INSTANCE_DS                ABP_UINT16_SIZEOF
#define ABP_CPN_IA_ENABLE_APP_CIP_OBJECTS_DS       ABP_BOOL_SIZEOF
#define ABP_CPN_IA_ENABLE_PARAM_OBJECT_DS          ABP_BOOL_SIZEOF
#define ABP_CPN_IA_BIT_SLAVE_DS                    ABP_BOOL_SIZEOF


/*------------------------------------------------------------------------------
**
** The Anybus-CC CompoNet Object specific message commands.
**
**------------------------------------------------------------------------------
*/

#define ABP_CPN_CMD_PROCESS_CIP_OBJ_REQUEST     0x10


/*------------------------------------------------------------------------------
**
** The Anybus-CC CompoNet Object specific exception codes.
**
**------------------------------------------------------------------------------
*/

#define ABP_CPN_NW_EXCPT_INFO_INVALID_SY_INST   0x01


#endif  /* inclusion lock */

/*******************************************************************************
**
** End of abp_cpn.h
**
********************************************************************************
*/
