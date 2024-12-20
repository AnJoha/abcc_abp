/*******************************************************************************
********************************************************************************
** Copyright 2022-present HMS Industrial Networks AB.
** Licensed under the MIT License.
********************************************************************************
********************************************************************************
** Anybus-CC Protocol - CC-Link IE TSN Definitions.
**
** This software component contains protocol definitions used by the CC-Link IE
** TSN Anybus-CC module as well as applications designed to use such
** modules.
**
** The generic portion used by all Anybus-CC modules is available in the file
** ABP.H.
********************************************************************************
********************************************************************************
** Services:
********************************************************************************
********************************************************************************
*/

#ifndef ABP_CIET_H
#define ABP_CIET_H

/*******************************************************************************
** Constants
********************************************************************************
*/
/*------------------------------------------------------------------------------
** CC-Link IE TSN object instance attributes
**------------------------------------------------------------------------------
*/
#define ABP_CIET_IA_VENDOR_CODE          1
#define ABP_CIET_IA_VENDOR_NAME          2
#define ABP_CIET_IA_MODEL_CODE           3
#define ABP_CIET_IA_EXPANSION_MODEL_CODE 4
#define ABP_CIET_IA_MODEL_NAME           5
#define ABP_CIET_IA_DEVICE_TYPE          6
#define ABP_CIET_IA_DEVICE_VERSION       7
#define ABP_CIET_IA_FW_VERSION           8
#define ABP_CIET_IA_HW_VERSION           9
#define ABP_CIET_IA_SERIAL_NUMBER        10
#define ABP_CIET_IA_CLOCK_OFFSET         11

/*------------------------------------------------------------------------------
** The data size of the CC-Link IE TSN object instance attributes
** (in bytes).
**------------------------------------------------------------------------------
*/
#define ABP_CIET_VENDOR_NAME_STR_LEN   32
#define ABP_CIET_MODEL_NAME_STR_LEN    20
#define ABP_CIET_SERIAL_NUMBER_STR_LEN 32

#define ABP_CIET_IA_VENDOR_CODE_DS          ABP_UINT16_SIZEOF
#define ABP_CIET_IA_VENDOR_NAME_DS          ( ABP_CHAR_SIZEOF * ABP_CIET_VENDOR_NAME_STR_LEN )
#define ABP_CIET_IA_MODEL_CODE_DS           ABP_UINT32_SIZEOF
#define ABP_CIET_IA_EXPANSION_MODEL_CODE_DS ABP_UINT16_SIZEOF
#define ABP_CIET_IA_MODEL_NAME_DS           ( ABP_CHAR_SIZEOF * ABP_CIET_MODEL_NAME_STR_LEN )
#define ABP_CIET_IA_DEVICE_TYPE_DS          ABP_UINT16_SIZEOF
#define ABP_CIET_IA_DEVICE_VERSION_DS       ABP_UINT16_SIZEOF
#define ABP_CIET_IA_FW_VERSION_DS           ABP_UINT16_SIZEOF
#define ABP_CIET_IA_HW_VERSION_DS           ABP_UINT8_SIZEOF
#define ABP_CIET_IA_SERIAL_NUMBER_DS        ( ABP_CHAR_SIZEOF * ABP_CIET_SERIAL_NUMBER_STR_LEN )
#define ABP_CIET_IA_CLOCK_OFFSET_DS         ( ABP_UINT64_SIZEOF + ABP_UINT32_SIZEOF + 2 * ABP_UINT16_SIZEOF )

/*******************************************************************************
** Typedefs
********************************************************************************
*/
/*------------------------------------------------------------------------------
** Structure describing clock offset
**------------------------------------------------------------------------------
*/
ABCC_SYS_PACK_ON
typedef struct ABP_CIET_ClockOffset
{
   INT64 llOffsetSec;
   INT32 lOffsetNanoSec;
   INT16 iUtcOffsetMin;
   INT16 iSummerTimeOffsetMin;
}
PACKED_STRUCT ABP_CIET_ClockOffsetType;
ABCC_SYS_PACK_OFF

#endif  /* inclusion lock */
