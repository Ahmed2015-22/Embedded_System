/*=================================================================================*/
/*  File        : LED_Program.c                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/7/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/

#include "LED_Interface.h"

void LED_INIT (u8 port , u8 pin)
{
	DIO_Set_Pin_directio(port , pin  , Output);
}

void LED_Turn_ON (u8 port , u8 pin)
{
	DIO_Set_Pin_value(port , pin  , High);
}

void LED_Turn_OFF (u8 port , u8 pin)
{
	DIO_Set_Pin_value(port , pin  , Low);
}

void LED_Toggle(u8 port , u8 pin)
{
	DIO_Toggle_Pin(port , pin);
}
