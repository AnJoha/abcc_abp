/*******************************************************************************
********************************************************************************
** COPYRIGHT NOTIFICATION (c) 2018 HMS Industrial Networks AB                 **
**                                                                            **
** This code is the property of HMS Industrial Networks AB.                   **
** The source code may not be reproduced, distributed, or used without        **
** permission. When used together with a product from HMS, permission is      **
** granted to modify, reproduce and distribute the code in binary form        **
** without any restrictions.                                                  **
**                                                                            **
** THE CODE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND. HMS DOES NOT    **
** WARRANT THAT THE FUNCTIONS OF THE CODE WILL MEET YOUR REQUIREMENTS, OR     **
** THAT THE OPERATION OF THE CODE WILL BE UNINTERRUPTED OR ERROR-FREE, OR     **
** THAT DEFECTS IN IT CAN BE CORRECTED.                                       **

********************************************************************************
********************************************************************************
** This file contains MQTT specific definitions.
********************************************************************************
********************************************************************************
*/

#ifndef ABP_MQTT_H_
#define ABP_MQTT_H_

/*------------------------------------------------------------------------------
** MQTT instance attributes
**------------------------------------------------------------------------------
*/
#define ABP_MQTT_IA_MODE        1
#define ABP_MQTT_IA_CLIENT_ID   2

/*------------------------------------------------------------------------------
** The data size of the MQTT instance attributes
**------------------------------------------------------------------------------
*/
#define ABP_MQTT_IA_ENABLE_DS          ( ABP_UINT8_SIZEOF )
#define ABP_MQTT_IA_CLIENT_ID_MAX_DS   ( 23 * ABP_CHAR_SIZEOF )

/*------------------------------------------------------------------------------
** Values of the Mode attribute
**------------------------------------------------------------------------------
*/
typedef enum ABP_MqttMode
{
   ABP_MQTT_MODE_DISABLED = 0,
   ABP_MQTT_MODE_JSON     = 1
}
ABP_MqttModeType;

#endif  /* inclusion lock */
