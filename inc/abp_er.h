/*******************************************************************************
********************************************************************************
** Copyright 2014-present HMS Industrial Networks AB.
** Licensed under the MIT License.
********************************************************************************
********************************************************************************
**
** File Name
** ---------
**
** abp_er.h
**
********************************************************************************
********************************************************************************
**
** Description
** -----------
**
** abp_er.h - Anybus-CC Energy Reporting Object Protocol Definitions.
**
** This software component contains Energy Reporting definitions used by
** Anybus-CC modules as well as applications designed to use such modules.
**
********************************************************************************
********************************************************************************
*/

#ifndef ABP_ER_H
#define ABP_ER_H


/*******************************************************************************
**
** Anybus-CC Energy Reporting Object constants.
**
** Object revision: 1.
**
********************************************************************************
*/

/*------------------------------------------------------------------------------
**
** The Anybus-CC Energy Reporting object instance attributes.
**
**------------------------------------------------------------------------------
*/

#define ABP_ER_IA_ENERGY_READING                1
#define ABP_ER_IA_DIRECTION                     2
#define ABP_ER_IA_ACCURACY                      3
#define ABP_ER_IA_CURRENT_POWER_CONSUMPTION     4
#define ABP_ER_IA_NOMINAL_POWER_CONSUMPTION     5


/*------------------------------------------------------------------------------
**
** The data size of the Anybus-CC Energy Reporting object instance attributes
** (in bytes).
**
**------------------------------------------------------------------------------
*/

#define ABP_ER_IA_ENERGY_READING_DS             ( 2 * ABP_UINT32_SIZEOF )
#define ABP_ER_IA_DIRECTION_DS                  ABP_BOOL_SIZEOF
#define ABP_ER_IA_ACCURACY_DS                   ABP_UINT16_SIZEOF
#define ABP_ER_IA_CURRENT_POWER_CONSUMPTION_DS  ABP_UINT16_SIZEOF
#define ABP_ER_IA_NOMINAL_POWER_CONSUMPTION_DS  ABP_UINT32_SIZEOF


#endif  /* inclusion lock */

/*******************************************************************************
**
** End of abp_er.h
**
********************************************************************************
*/
