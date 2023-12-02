/*=================================================================================*/
/*  File        : DIO_Interface.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/7/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#ifndef COTS_MCAL_DIO_DIO_INTERFACE_H_
#define COTS_MCAL_DIO_DIO_INTERFACE_H_

#include "../../LIB/Bit_Math.h"
#include "../../LIB/STD_Types.h"
#include "DIO_Config.h"
#include "DIO_Private.h"

void DIO_Set_Port_directio(DIO_PORT_ID port_id,DIO_direction direction);

void DIO_Set_Port_value(DIO_PORT_ID port_id,u8 value);

void DIO_Set_Pin_directio(DIO_PORT_ID port_id,DIO_PIN_ID pin_id,DIO_direction direction);

void DIO_Set_Pin_value(DIO_PORT_ID port_id,DIO_PIN_ID pin_id,DIO_value value);

void DIO_Toggle_Pin(DIO_PORT_ID port_id,DIO_PIN_ID pin_id);

void DIO_Connectpullup(DIO_PORT_ID portname ,DIO_PIN_ID pinnumber, DIO_value connect_pullup);

DIO_value DIO_Get_Pin_Value(DIO_PORT_ID port_id,DIO_PIN_ID pin_id);

#endif /* COTS_MCAL_DIO_DIO_INTERFACE_H_ */
