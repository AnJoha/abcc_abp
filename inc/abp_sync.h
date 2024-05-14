/*******************************************************************************
********************************************************************************
** Copyright 2018-present HMS Industrial Networks AB.
** Licensed under the MIT License.
********************************************************************************
********************************************************************************
** This file contains Sync Object specific definitions used by
** ABCC modules as well as applications designed to use the Sync Object.
********************************************************************************
********************************************************************************
*/

#ifndef ABP_SYNC_H_
#define ABP_SYNC_H_

#include "abp.h"

/*------------------------------------------------------------------------------
** The Sync Object specific instance attributes.
**------------------------------------------------------------------------------
*/
#define ABP_SYNC_IA_CYCLE_TIME               1    /* Cycle time */
#define ABP_SYNC_IA_OUTPUT_VALID             2    /* Output valid */
#define ABP_SYNC_IA_INPUT_CAPTURE            3    /* Input capture */
#define ABP_SYNC_IA_OUTPUT_PROCESSING        4    /* Output processing */
#define ABP_SYNC_IA_INPUT_PROCESSING         5    /* Input processing */
#define ABP_SYNC_IA_MIN_CYCLE_TIME           6    /* Min cycle time */
#define ABP_SYNC_IA_SYNC_MODE                7    /* Sync mode */
#define ABP_SYNC_IA_SUPPORTED_SYNC_MODES     8    /* Supported sync modes */
#define ABP_SYNC_IA_CONTROL_CYCLE_FACTOR     9    /* Control task cycle factor */

/*------------------------------------------------------------------------------
** The data size of the Sync Object specific instance attributes (in bytes).
**------------------------------------------------------------------------------
*/
#define ABP_SYNC_IA_CYCLE_TIME_DS            ABP_UINT32_SIZEOF
#define ABP_SYNC_IA_OUTPUT_VALID_DS          ABP_UINT32_SIZEOF
#define ABP_SYNC_IA_INPUT_CAPTURE_DS         ABP_UINT32_SIZEOF
#define ABP_SYNC_IA_OUTPUT_PROCESSING_DS     ABP_UINT32_SIZEOF
#define ABP_SYNC_IA_INPUT_PROCESSING_DS      ABP_UINT32_SIZEOF
#define ABP_SYNC_IA_MIN_CYCLE_TIME_DS        ABP_UINT32_SIZEOF
#define ABP_SYNC_IA_SYNC_MODE_DS             ABP_UINT16_SIZEOF
#define ABP_SYNC_IA_SUPPORTED_SYNC_MODES_DS  ABP_UINT16_SIZEOF
#define ABP_SYNC_IA_CONTROL_CYCLE_FACTOR_DS  ABP_UINT16_SIZEOF

#endif  /* inclusion lock */
