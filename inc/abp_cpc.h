/*******************************************************************************
********************************************************************************
** Copyright 2008-present HMS Industrial Networks AB.
** Licensed under the MIT License.
********************************************************************************
** File Name
** ---------
**
** abp_cpc.h
**
********************************************************************************
********************************************************************************
**
** Description
** -----------
**
** ABP - Anybus-CC CIP Port Configuration Object Protocol Definitions.
**
** This software component contains CPC definitions used by Anybus-CC
** modules as well as applications designed to use such modules.
**
********************************************************************************
********************************************************************************
*/

#ifndef ABP_CPC_H
#define ABP_CPC_H


/*******************************************************************************
**
** CIP Port Configuration object constants.
**
** Object revision: 1.
**
********************************************************************************
*/

/*------------------------------------------------------------------------------
**
** The CIP Port Configuration object specific object attributes.
**
**------------------------------------------------------------------------------
*/

#define ABP_CPC_OA_MAX_INST               11    /* Max number of instances    */


/*------------------------------------------------------------------------------
**
** The data size of the Anybus-CC CIP Port Configuration object specific
** attributes (in bytes).
**
**------------------------------------------------------------------------------
*/

#define ABP_CPC_OA_MAX_INST_DS            ABP_UINT16_SIZEOF


/*------------------------------------------------------------------------------
**
** The CIP Port Configuration instance attributes.
**
**------------------------------------------------------------------------------
*/

#define ABP_CPC_IA_PORT_TYPE                 1   /* Port type                 */
#define ABP_CPC_IA_PORT_NUMBER               2   /* Port number               */
#define ABP_CPC_IA_LINK_PATH                 3   /* Link path                 */
#define ABP_CPC_IA_PORT_NAME                 4   /* Port name                 */
#define ABP_CPC_IA_NODE_ADDRESS              7   /* Node address              */
#define ABP_CPC_IA_PORT_NODE_RANGE           8   /* Port node range           */
#define ABP_CPC_IA_PORT_ROUTING_CAPABILITIES 10  /* Port routing capabilities */


/*------------------------------------------------------------------------------
**
** The data size of the Anybus-CC CIP Port Configuration object instance
** attributes (in bytes).
**
**------------------------------------------------------------------------------
*/

#define ABP_CPC_IA_PORT_TYPE_DS                    ABP_UINT16_SIZEOF
#define ABP_CPC_IA_PORT_NUMBER_DS                  ABP_UINT16_SIZEOF
#define ABP_CPC_IA_LINK_PATH_MAX_DS                12
#define ABP_CPC_IA_PORT_NAME_MAX_DS                64
#define ABP_CPC_IA_NODE_ADDRESS_MAX_DS             64
#define ABP_CPC_IA_PORT_NODE_RANGE_DS              ( 2 * ABP_UINT16_SIZEOF )
#define ABP_CPC_IA_PORT_ROUTING_CAPABILITIES_DS    ABP_UINT32_SIZEOF


#endif  /* inclusion lock */

/*******************************************************************************
**
** End of abp_cpc.h
**
********************************************************************************
*/
