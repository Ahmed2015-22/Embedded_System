/*=================================================================================*/
/*  File        : LDR.c                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/17/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/

#include "LDR.h"

void LDR_init(u8 Channel_Number)
{
	ADC_voidInit();
	DIO_Set_Pin_directio(portA , Channel_Number , Input);
}

u16 LDR_Get_Brightness(u8 Channel_Number)
{
	u16 Analog = 0;
	u16 mv = 0;
	u16 LDR_Value = 0;
	Analog = ADC_u16ReadSynchronus(Channel_Number);
	mv=(Analog * 5000)/256;
	LDR_Value = mv*3.8;

	return LDR_Value;
}
