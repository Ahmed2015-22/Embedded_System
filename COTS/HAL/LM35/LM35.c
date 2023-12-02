/*=================================================================================*/
/*  File        : LM35.c                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/17/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#include "LM35.h"

void LM35_init(u8 Channel_Number)
{
	ADC_voidInit();
	DIO_Set_Pin_directio(portA , Channel_Number , Input);
}

u8 LM35_Get_Temp(u8 Channel_Number)
{
	u16 Analog = 0;
	u8 Temp = 0;
	Analog = ADC_u16ReadSynchronus(Channel_Number);
	Temp = Analog / 2.01;
	return Temp;

}
