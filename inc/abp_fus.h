/*******************************************************************************
********************************************************************************
**
** File Name
** ---------
**
** abp_fus.h
**
********************************************************************************
********************************************************************************
**
** Description
** -----------
**
** abp_fus.h - Anybus-CC Functional Safety Object Protocol Definitions.
**
** This software component contains FSU definitions used by Anybus-CC
** modules as well as applications designed to use such modules.
**
********************************************************************************
********************************************************************************
**                                                                            **
** COPYRIGHT NOTIFICATION (c) 2012 HMS Industrial Networks AB                 **
**                                                                            **
** This code is the property of HMS Industrial Networks AB.                   **
** The source code may not be reproduced, distributed, or used without        **
** permission. When used together with a product from HMS, this code can be   **
** modified, reproduced and distributed in binary form without any            **
** restrictions.                                                              **
**                                                                            **
** THE CODE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND. HMS DOES NOT    **
** WARRANT THAT THE FUNCTIONS OF THE CODE WILL MEET YOUR REQUIREMENTS, OR     **
** THAT THE OPERATION OF THE CODE WILL BE UNINTERRUPTED OR ERROR-FREE, OR     **
** THAT DEFECTS IN IT CAN BE CORRECTED.                                       **
**                                                                            **
********************************************************************************
********************************************************************************
*/

#ifndef ABP_FUS_H
#define ABP_FUS_H


/*------------------------------------------------------------------------------
**
** The instance attributes.
**
**------------------------------------------------------------------------------
*/

#define ABP_FUS_IA_ASM_ENABLED                1
#define ABP_FUS_IA_STATE                      2
#define ABP_FUS_IA_VENDOR_ID                  3
#define ABP_FUS_IA_MODULE_ID                  4
#define ABP_FUS_IA_FW_VERSION                 5
#define ABP_FUS_IA_SERIAL_NUM                 6
#define ABP_FUS_IA_DATA_OUT                   7
#define ABP_FUS_IA_DATA_IN                    8
#define ABP_FUS_IA_ERROR_CNTRS                9
#define ABP_FUS_IA_FATAL_EVENT                10
#define ABP_FUS_IA_BAUD_RATE                  11


/*------------------------------------------------------------------------------
**
** The data size of the instance attributes (in bytes).
**
**------------------------------------------------------------------------------
*/

#define ABP_FUS_IA_ASM_ENABLED_DS       ABP_BOOL_SIZEOF
#define ABP_FUS_IA_STATE_DS             ABP_UINT8_SIZEOF
#define ABP_FUS_IA_VENDOR_ID_DS         ABP_UINT16_SIZEOF
#define ABP_FUS_IA_MODULE_ID_DS         ABP_UINT16_SIZEOF
#define ABP_FUS_IA_FW_VERSION_DS        ( 3 * ABP_UINT8_SIZEOF )
#define ABP_FUS_IA_SERIAL_NUM_DS        ABP_UINT32_SIZEOF
#define ABP_FUS_IA_ERROR_CNTRS_DS       ( 2 * ABP_UINT16_SIZEOF )
#define ABP_FUS_IA_BAUD_RATE_DS         ABP_UINT32_SIZEOF


/*------------------------------------------------------------------------------
**
** Object specific error codes
**
**------------------------------------------------------------------------------
*/

#define ABP_FUS_ERR_ENABLE_STARTUP         0x01
#define ABP_FUS_ERR_ENABLE_FIRST_CYCLIC    0x02
#define ABP_FUS_ERR_ASM_MSG_ERROR          0x03
#define ABP_FUS_ERR_HW_NOT_SUPPORTING_ASM  0x04

#define ABP_FUS_ERR_ASM_MSG_DS             4


/*-----------------------------------------------------------------------
**
** ABP_FUS_IA_ERROR_CNTRS_IDX_...
**
** Index for the different counters in the Error Counters attribute
** (array of UINT16)
**
**-----------------------------------------------------------------------
*/

#define ABP_FUS_IA_ERROR_CNTRS_IDX_ABCC_DR   0
#define ABP_FUS_IA_ERROR_CNTRS_IDX_ABCC_SE   1
#define ABP_FUS_IA_ERROR_CNTRS_IDX_ASM_DR    2
#define ABP_FUS_IA_ERROR_CNTRS_IDX_ASM_SE    3


/*------------------------------------------------------------------------------
**
** The Anybus-CC Functional Safety object specific message commands.
**
**------------------------------------------------------------------------------
*/

#define ABP_FUS_CMD_ERROR_CONFIRMATION       0x10
#define ABP_FUS_CMD_SET_ASM_IO_CFG_STRING    0x11


#endif  /* inclusion lock */

/*******************************************************************************
**
** end of abp_fus.h
**
********************************************************************************
*/
