/*******************************************************************************
********************************************************************************
** Copyright 2016-present HMS Industrial Networks AB.
** Licensed under the MIT License.
********************************************************************************
********************************************************************************
** Anybus-CC Network CC-Link IE Field Network Object Protocol Definitions
********************************************************************************
********************************************************************************
** Services:
********************************************************************************
********************************************************************************
*/

#ifndef ABP_NWCFN_H_
#define ABP_NWCFN_H_

/*******************************************************************************
** Constants
********************************************************************************
*/
/*------------------------------------------------------------------------------
** Network CC-Link IE Field Network object instance attributes.
**------------------------------------------------------------------------------
*/
#define ABP_NWCFN_IA_IO_DATA_SIZES 1
#define ABP_NWCFN_IA_APP_OP_STATUS 2
#define ABP_NWCFN_IA_SLMP_REC_LOCK 3

/*------------------------------------------------------------------------------
** The data sizes of the Network CC-Link IE Field Network object instance
** attributes (in bytes).
**------------------------------------------------------------------------------
*/
#define ABP_NWCFN_IA_IO_DATA_SIZES_DS ( 4 * ABP_UINT16_SIZEOF )
#define ABP_NWCFN_IA_APP_OP_STATUS_DS ABP_UINT8_SIZEOF
#define ABP_NWCFN_IA_SLMP_REC_LOCK_DS ABP_UINT8_SIZEOF

/*------------------------------------------------------------------------------
** Network CC-Link IE Field Network object specific message commands
**------------------------------------------------------------------------------
*/
#define ABP_NWCFN_CMD_EXT_LOOPBACK 0x10

#endif  /* inclusion lock */
