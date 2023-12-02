/*=================================================================================*/
/*  File        : BUTTON_Interface.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/7/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#ifndef COTS_HAL_BUTTON_BUTTON_INTERFACE_H_
#define COTS_HAL_BUTTON_BUTTON_INTERFACE_H_

#include "../../MCAL/DIO/DIO_Interface.h"

void BUTTON_INIT (u8 port , u8 pin);

DIO_value BUTTON_Read_Status (u8 port , u8 pin);

#endif /* COTS_HAL_BUTTON_BUTTON_INTERFACE_H_ */
