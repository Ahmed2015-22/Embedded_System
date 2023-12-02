/*=================================================================================*/
/*  File        : DIO_Config.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/7/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#ifndef COTS_MCAL_DIO_DIO_CONFIG_H_
#define COTS_MCAL_DIO_DIO_CONFIG_H_

typedef enum
{
	Input,
	Output
}DIO_direction;

typedef enum
{
	Low,
	High
}DIO_value;

typedef enum
{
	pin0,
	pin1,
	pin2,
	pin3,
	pin4,
	pin5,
	pin6,
	pin7
}DIO_PIN_ID;

typedef enum
{
	portA,
	portB,
	portC,
	portD
}DIO_PORT_ID;


#endif /* COTS_MCAL_DIO_DIO_CONFIG_H_ */
