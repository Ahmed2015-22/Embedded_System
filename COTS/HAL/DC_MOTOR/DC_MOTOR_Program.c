/*=================================================================================*/
/*  File        : DC_MOTOR_Program.c                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/9/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#include "DC_MOTOR_Interface.h"

void DC_Motor_Init(u8 port , u8 pinF , u8 pinB)
{
	DIO_Set_Pin_directio(port , pinF , Output);
	DIO_Set_Pin_directio(port , pinB , Output);
}

void DC_Motor_Move_Forword(u8 port , u8 pinF , u8 pinB)
{
	DIO_Set_Pin_directio(port , pinF , High);
	DIO_Set_Pin_directio(port , pinB , Low);
}

void DC_Motor_Move_Backrword(u8 port , u8 pinF , u8 pinB)
{
	DIO_Set_Pin_directio(port , pinF , Low);
	DIO_Set_Pin_directio(port , pinB , High);
}

void DC_Motor_Stop(u8 port , u8 pinF , u8 pinB)
{
	DIO_Set_Pin_directio(port , pinF , Low);
	DIO_Set_Pin_directio(port , pinB , Low);
}
