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
** abp_nwetn.h
**
********************************************************************************
********************************************************************************
**
** Description
** -----------
**
** ABP - Anybus-CC Network Ethernet Object Protocol Definitions.
**
** This software component contains NWETN definitions used by Anybus-CC
** modules as well as applications designed to use such modules.
**
********************************************************************************
********************************************************************************
*/

#ifndef ABP_NWETN_H
#define ABP_NWETN_H


/*******************************************************************************
**
** Network Ethernet Interface object constants.
**
** Object revision: 1.
**
********************************************************************************
*/

/*------------------------------------------------------------------------------
**
** The Network Ethernet Object instance attributes.
**
**------------------------------------------------------------------------------
*/

#define ABP_NWETN_IA_MAC_ID                1
#define ABP_NWETN_IA_PORT1_MAC_ID          2
#define ABP_NWETN_IA_PORT2_MAC_ID          3
#define ABP_NWETN_IA_MAC_ADDRESS           4
#define ABP_NWETN_IA_INTERFACE_COUNTERS    5
#define ABP_NWETN_IA_MEDIA_COUNTERS        6


/*------------------------------------------------------------------------------
**
** The data size of the Anybus-CC Network Ethernet Object instance attributes
** (in bytes).
**
**------------------------------------------------------------------------------
*/

#define ABP_NWETN_IA_MAC_ID_DS               ( 6 * ABP_UINT8_SIZEOF )
#define ABP_NWETN_IA_PORT1_MAC_ID_DS         ( 6 * ABP_UINT8_SIZEOF )
#define ABP_NWETN_IA_PORT2_MAC_ID_DS         ( 6 * ABP_UINT8_SIZEOF )
#define ABP_NWETN_IA_MAC_ADDRESS_DS          ( 6 * ABP_UINT8_SIZEOF )
#define ABP_NWETN_IA_INTERFACE_COUNTERS_DS   ( 11 * ABP_UINT32_SIZEOF )
#define ABP_NWETN_IA_MEDIA_COUNTERS_DS       ( 12 * ABP_UINT32_SIZEOF )

#endif  /* inclusion lock */

/*******************************************************************************
**
** End of abp_nwetn.h
**
********************************************************************************
*/
