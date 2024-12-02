/*******************************************************************************
********************************************************************************
** Copyright 2014-present HMS Industrial Networks AB.
** Licensed under the MIT License.
********************************************************************************
********************************************************************************
** This file contains Modular Device Object specific definitions used by
** ABCC modules as well as applications designed to use such modules.
********************************************************************************
********************************************************************************
*/

#ifndef ABP_MDD_H_
#define ABP_MDD_H_

#include "abp.h"

/*------------------------------------------------------------------------------
** The Modular Device object specific object attributes.
**
** ABP_MDD_OA_NUM_SLOTS          -  Number of available slots in the backplane,
**                                  including the coupler.
** ABP_MDD_OA_NUM_ADIS_PER_SLOT  -  Number of ADIs each slot occupies.
**------------------------------------------------------------------------------
*/
#define ABP_MDD_OA_NUM_SLOTS              11
#define ABP_MDD_OA_NUM_ADIS_PER_SLOT      12

/*------------------------------------------------------------------------------
** The data size of the Modular Device object specific attributes
** (in bytes).
**------------------------------------------------------------------------------
*/
#define ABP_MDD_OA_NUM_SLOTS_DS           ABP_UINT16_SIZEOF
#define ABP_MDD_OA_NUM_ADIS_PER_SLOT_DS   ABP_UINT16_SIZEOF

/*------------------------------------------------------------------------------
** The Modular Device object specific message commands.
**------------------------------------------------------------------------------
*/
#define ABP_MDD_CMD_GET_LIST              0x15

/*------------------------------------------------------------------------------
** Valid list types for the Get_List command.
**------------------------------------------------------------------------------
*/
#define ABP_MDD_LIST_TYPE_ALL_MODULE_IDS   0x01

#endif  /* inclusion lock */
