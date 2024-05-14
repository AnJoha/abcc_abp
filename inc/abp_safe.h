/*******************************************************************************
********************************************************************************
** Copyright 2013-present HMS Industrial Networks AB.
** Licensed under the MIT License.
********************************************************************************
********************************************************************************
**
** File Name
** ---------
**
** abp_safe.h
**
********************************************************************************
********************************************************************************
**
** Description
** -----------
**
** abp_safe.h - Anybus-CC Functional Safety Object Protocol Definitions.
**
** This software component contains definitions used by Anybus-CC
** modules as well as applications designed to use Functional Safety.
**
** This describes the safety object residing in the host application.
**
********************************************************************************
********************************************************************************
*/

#ifndef ABP_SAFE_H_
#define ABP_SAFE_H_


/*------------------------------------------------------------------------------
**
** The Functional Safety instance attributes.
**
**------------------------------------------------------------------------------
*/

#define ABP_SAFE_IA_SAFETY_ENABLED              1
#define ABP_SAFE_IA_BAUD_RATE                   2
#define ABP_SAFE_IA_IO_CONFIG                   3 /* Obsolete - replaced by command
                                                  ** in functional safety module
                                                  ** object.
                                                  */
#define ABP_SAFE_IA_CYCLE_TIME                  4 /* ABCC40 */
#define ABP_SAFE_IA_FW_UPGRADE_IN_PROGRESS      5 /* ABCC40 */


/*------------------------------------------------------------------------------
**
** The data size of the Functional Safety instance attributes (in bytes).
**
**------------------------------------------------------------------------------
*/

#define ABP_SAFE_IA_SAFETY_ENABLED_DS           ABP_BOOL_SIZEOF
#define ABP_SAFE_IA_BAUD_RATE_DS                ABP_UINT32_SIZEOF
#define ABP_SAFE_IA_CYCLE_TIME_DS               ABP_UINT8_SIZEOF
#define ABP_SAFE_IA_FW_UPGRADE_IN_PROGRESS_DS   ABP_BOOL_SIZEOF


#endif  /* inclusion lock */

/*******************************************************************************
**
** End of abp_safe.h
**
********************************************************************************
*/
