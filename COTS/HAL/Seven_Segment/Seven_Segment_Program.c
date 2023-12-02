/*=================================================================================*/
/*  File        : Seven_Segment_Program.c                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/7/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/

#include "Seven_Segment_Interface.h"

void Seven_Seg_Initialization()
{
	DIO_Set_Pin_directio(portC,pin4,Output);
	DIO_Set_Pin_directio(portC,pin5,Output);
	DIO_Set_Pin_directio(portC,pin6,Output);
	DIO_Set_Pin_directio(portC,pin7,Output);

	//DIO_Set_Pin_directio(portB,pin2,Output);
	//DIO_Set_Pin_directio(portB,pin1,Output);
}

/*void Seven_Seg_Enable1()
{
	DIO_Set_Pin_value(portB,pin2,High);
}

void Seven_Seg_Enable2()
{
	DIO_Set_Pin_value(portB,pin1,High);
}

void Seven_Seg_Disable1()
{
	DIO_Set_Pin_value(portB,pin2,Low);
}

void Seven_Seg_Disable2()
{
	DIO_Set_Pin_value(portB,pin1,Low);
}*/

void Seven_Seg_Write(unsigned char number)
{
	if(number < 10)
	{
		DIO_Set_Pin_value(portC , pin4 , GET_BIT(number,0));
		DIO_Set_Pin_value(portC , pin5 , GET_BIT(number,1));
		DIO_Set_Pin_value(portC , pin6 , GET_BIT(number,2));
		DIO_Set_Pin_value(portC , pin7 , GET_BIT(number,3));
	}
}
