/*=================================================================================*/
/*  File        : LED_Interface.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/7/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/

#ifndef COTS_HAL_LED_LED_INTERFACE_H_
#define COTS_HAL_LED_LED_INTERFACE_H_

#include "../../MCAL/DIO/DIO_Interface.h"

void LED_INIT (u8 port , u8 pin);

void LED_Turn_ON (u8 port , u8 pin);

void LED_Turn_OFF (u8 port , u8 pin);

void LED_Toggle(u8 port , u8 pin);

#endif /* COTS_HAL_LED_LED_INTERFACE_H_ */
