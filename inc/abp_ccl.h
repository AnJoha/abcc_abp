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
** abp_ccl.h
**
********************************************************************************
********************************************************************************
**
** Description
** -----------
**
** abp_ccl - Anybus-CC Protocol - CC-Link Definitions.
**
** This software component contains protocol definitions used by the CC-Link
** Anybus-CC module as well as applications designed to use such modules.
*/

#ifndef ABP_CCL_H
#define ABP_CCL_H


/*******************************************************************************
**
** Anybus-CC CC-Link object constants.
**
** Object revision: 1.
**
********************************************************************************
*/

/*------------------------------------------------------------------------------
**
** CC-Link object instance number
**
**------------------------------------------------------------------------------
*/

#define ABP_CCL_OI_ID                     1


/*------------------------------------------------------------------------------
**
** CC-Link object instance attributes.
**
**------------------------------------------------------------------------------
*/

enum
{
   ABP_CCL_IA_VENDOR_CODE            = 1,
   ABP_CCL_IA_SOFTWARE_VERSION       = 2,
   ABP_CCL_IA_MODEL_CODE             = 3,
   ABP_CCL_IA_NETWORK_SETTINGS       = 4,
   ABP_CCL_IA_SYS_AREA_HANDLER       = 5,
   ABP_CCL_IA_HOLD_CLEAR_SETTING     = 6
};


/*------------------------------------------------------------------------------
**
** The data size of the CC-Link object instance attributes (in bytes).
**
**------------------------------------------------------------------------------
*/

#define ABP_CCL_IA_VENDOR_CODE_DS         ABP_UINT16_SIZEOF
#define ABP_CCL_IA_SOFTWARE_VERSION_DS    ABP_UINT8_SIZEOF
#define ABP_CCL_IA_MODEL_CODE_DS          ABP_UINT8_SIZEOF
#define ABP_CCL_IA_NETWORK_SETTINGS_DS    ( ABP_UINT8_SIZEOF +                \
                                            ABP_UINT8_SIZEOF +                \
                                            ABP_UINT8_SIZEOF )
#define ABP_CCL_IA_SYS_AREA_HANDLER_DS    ABP_SINT16_SIZEOF
#define ABP_CCL_IA_HOLD_CLEAR_SETTING_DS  ABP_UINT8_SIZEOF


/*------------------------------------------------------------------------------
**
** CC-Link object specific commands
**
**------------------------------------------------------------------------------
*/

enum
{
   ABP_CCL_CMD_INITIAL_DATA_SETTING_NOTIFICATION   = 0x10,
   ABP_CCL_CMD_INITIAL_DATA_PROCESSING_COMPLETED_NOTIFICATION
};


#endif  /* inclusion lock */

/*******************************************************************************
**
** end of abp_ccl.h
**
********************************************************************************
*/
