/*=================================================================================*/
/*  File        : BUTTON_Program.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/7/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/

#include "BUTTON_Interface.h"

void BUTTON_INIT (u8 port , u8 pin)
{
	DIO_Set_Pin_directio(port , pin  , Input);
}

DIO_value BUTTON_Read_Status (u8 port , u8 pin)
{
	DIO_value Value;
	Value = DIO_Get_Pin_Value(port , pin);
	return Value;
}

