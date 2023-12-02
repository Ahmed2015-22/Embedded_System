/*=================================================================================*/
/*  File        : LCD_Interface.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/8/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#ifndef COTS_HAL_KPAD_KPAD_INTERFACE_H_
#define COTS_HAL_KPAD_KPAD_INTERFACE_H_

#include "KPAD_Config.h"
#include "../../MCAL/DIO/DIO_Interface.h"

u8 Keypad_GetPressedKey (void);

#endif /* COTS_HAL_KPAD_KPAD_INTERFACE_H_ */
