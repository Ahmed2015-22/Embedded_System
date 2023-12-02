/*=================================================================================*/
/*  File        : LCD_Program.c                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/8/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/

#include "LCD_Intarface.h"
#include "string.h"

/*==============================================================================================*/
/**************************    A.Talaat LCD Functions Implementations       ************************/
/*==============================================================================================*/
/********************************** [1]  LCD_initialization                 **************************/
/********************************** [2]  LCD_write_cmd          			**************************/
/********************************** [3]  LCD_write_Data             		**************************/
/********************************** [4]  LCD_gotoXY           				**************************/
/********************************** [5]  LCD_writestring      				**************************/
/********************************** [6]  LCD_Display_Str                    **************************/
/********************************** [7]  LCD_CLEAR                          **************************/
/********************************** [8] LCD_Integer_TO_String               **************************/
/*==============================================================================================*/
/*void LCD_initialization()
{
	DIO_Set_Port_directio(portB,Output);
	DIO_Set_Pin_directio(portA, pin0 , Output);
	DIO_Set_Pin_directio(portA, pin1 , Output);
	DIO_Set_Pin_directio(portA, pin2 , Output);
	_delay_ms(30);

	LCD_write_Data(lcd_Home);
	_delay_ms(15);

	LCD_write_cmd(lcd_FunctionSet8bit);
	_delay_ms(1);

	LCD_write_cmd(lcd_DisplayOn);
	_delay_ms(1);

	LCD_write_cmd(lcd_Clear);
	_delay_ms(15);

	LCD_write_cmd(lcd_EntryMode);
	_delay_ms(2);
}

void LCD_write_cmd(unsigned char cmd)
{
	DIO_Set_Pin_value(portA,pin0,Low);		//RS
	DIO_Set_Pin_value(portA,pin1,Low);		//RW
	DIO_Set_Pin_value(portA,pin2,High);		//EN

	DIO_Set_Port_value(portB ,cmd);

	DIO_Set_Pin_value(portA,pin2,Low);
	_delay_ms(5);
	DIO_Set_Pin_value(portA,pin2,High);
	_delay_ms(10);

}

void LCD_write_Data(unsigned char data)
{

	DIO_Set_Pin_value(portA,pin0,High);		//RS
	DIO_Set_Pin_value(portA,pin1,Low);		//RW
	DIO_Set_Pin_value(portA,pin2,High);		//EN

	DIO_Set_Port_value(portB ,data);

	DIO_Set_Pin_value(portA,pin2,Low);
	_delay_ms(5);
	DIO_Set_Pin_value(portA,pin2,High);
	_delay_ms(10);

}*/

/*
 * LCD4BIT.c
 *
 *  Created on: Nov 14, 2023
 *      Author: midoe
 */

#include "LCD_Intarface.h"
#include "string.h"

static u8 InitStepFinished = 0;

void LCD_initialization()
{
	/**** Initialization sequence for 4-bit mode ****/
	DIO_Set_Pin_directio(portA , pin0 , Output);
	DIO_Set_Pin_directio(portA , pin1 , Output);
	DIO_Set_Pin_directio(portA , pin2 , Output);
	DIO_Set_Pin_directio(portA , pin4 , Output);
	DIO_Set_Pin_directio(portA , pin5 , Output);
	DIO_Set_Pin_directio(portA , pin6 , Output);
	DIO_Set_Pin_directio(portA , pin7 , Output);
	/****** Voltage settle delay ******/
	_delay_ms(35);
	/**********************************/

	/*********** Function Set *********/
	LCD_write_cmd(0x20);
	LCD_write_cmd(0x20);

#if (FONT == FiveTimesSeven)
	/* enable LCD with 5*7 pixels configuration */
	/* 0b1000 0000 == <No. of lines><Font (5*7/5*10)> x x x x x x */
	LCD_write_cmd(0x80);

#elif (FONT == FiveTimesTen)
	/* enable LCD with 5*10 pixels configuration */
	/* 0b1100 0000 == <No. of lines><Font (5*7/5*10)> x x x x x x */
	LCD_write_cmd(0xC0);
#endif
	/**********************************/

	/**** Delay after Function Set ****/
	_delay_ms(1);
	/**********************************/

	/******* Display Control **********/
	LCD_write_cmd(0x00);
	/* 0b 1111 0000 == 1 <Display ON/OFF> <Cursor ON/OFF> <Cursor Blink> x x x x */
	LCD_write_cmd(0xC0);
	/**********************************/

	/** Delay after Display Control ***/
	_delay_ms(1);
	/**********************************/

	/********* Display Clear **********/
	LCD_write_cmd(0x00);
	LCD_write_cmd(0x10);
	/**********************************/

	/**** Delay after Display Clear ***/
	_delay_ms(2);
	/**********************************/

	/* Raise flag to indicate initialization step is finished */
	InitStepFinished = 1;

}

void LCD_write_cmd(u8 cmd)
{
	/* Select type of Data (RS) = command to be executed (RS = 0) */
	DIO_Set_Pin_value(portA, pin0, Low);
	/* Select operation (R/W) --> write operation (R/W = 0) */
	DIO_Set_Pin_value(portA, pin1, Low);


	/* Write on data pins (D0 --> D7 in 8-bit mode)
	 * Write on data pins (D4 --> D7 in 4-bit mode) */
	/* Write Most significant bits of data */
	DIO_Set_Pin_value(portA, pin4, GET_BIT(cmd, 4));
	DIO_Set_Pin_value(portA, pin5, GET_BIT(cmd, 5));
	DIO_Set_Pin_value(portA, pin6, GET_BIT(cmd, 6));
	DIO_Set_Pin_value(portA, pin7, GET_BIT(cmd, 7));

	if(InitStepFinished)
	{
		/* Apply latch (E) */
		/* Set enable pin to high */
		DIO_Set_Pin_value(portA, pin2, High);
		/* wait for controller to sense enable pin (wait for more than 50 usec) */
		_delay_ms(1);
		/* Set enable pin to low */
		DIO_Set_Pin_value(portA, pin2, Low);

		/* Write least significant bits of data */
		DIO_Set_Pin_value(portA, pin4, GET_BIT(cmd, 0));
		DIO_Set_Pin_value(portA, pin5, GET_BIT(cmd, 1));
		DIO_Set_Pin_value(portA, pin6, GET_BIT(cmd, 2));
		DIO_Set_Pin_value(portA, pin7, GET_BIT(cmd, 3));
	}
	/* Apply latch (E) */
	/* Set enable pin to high */
	DIO_Set_Pin_value(portA, pin2, High);
	/* wait for controller to sense enable pin (wait for more than 50 usec) */
	_delay_ms(1);
	/* Set enable pin to low */
	DIO_Set_Pin_value(portA, pin2, Low);

	/* 2 msec delay for instruction execution time - to avoid checking the busy flag */
	_delay_ms(2);
}

void LCD_write_Data(u8 Data)
{
	/* Select type of Data (RS) = Data to be displayed (RS = 1) */
	DIO_Set_Pin_value(portA, pin0, High);

	/* Select operation (R/W) --> write operation (R/W = 0) */
	DIO_Set_Pin_value(portA, pin1, Low);


	/* Write on data pins (D0 --> D7 in 8-bit mode)
	 * Write on data pins (D4 --> D7 in 4-bit mode) */
	/* Write Most significant bits of data */
	DIO_Set_Pin_value(portA, pin4, GET_BIT(Data, 4));
	DIO_Set_Pin_value(portA, pin5, GET_BIT(Data, 5));
	DIO_Set_Pin_value(portA, pin6, GET_BIT(Data, 6));
	DIO_Set_Pin_value(portA, pin7, GET_BIT(Data, 7));

	/* Apply latch (E) */
	/* Set enable pin to high */
	DIO_Set_Pin_value(portA, pin2, High);
	/* wait for controller to sense enable pin (wait for more than 50 usec) */
	_delay_ms(1);
	/* Set enable pin to low */
	DIO_Set_Pin_value(portA, pin2, Low);

	/* Write least significant bits of data */
	DIO_Set_Pin_value(portA, pin4, GET_BIT(Data, 0));
	DIO_Set_Pin_value(portA, pin5, GET_BIT(Data, 1));
	DIO_Set_Pin_value(portA, pin6, GET_BIT(Data, 2));
	DIO_Set_Pin_value(portA, pin7, GET_BIT(Data, 3));

	/* Apply latch (E) */
	/* Set enable pin to high */
	DIO_Set_Pin_value(portA, pin2, High);
	/* wait for controller to sense enable pin (wait for more than 50 usec) */
	_delay_ms(1);
	/* Set enable pin to low */
	DIO_Set_Pin_value(portA, pin2, Low);
}


void LCD_gotoXY(unsigned char row,unsigned char col)
{
	u8 address = 0;
	if( row<2 && col<16)
	{
		address = (row * 0x40) + col;
		address = SET_BIT(address,7);
		LCD_write_cmd(address);


	}
}

void LCD_writestring(unsigned char* str, unsigned char row,unsigned char col)
{
	LCD_gotoXY(row,col);

	unsigned char i=0;
	unsigned char line0=0;
	while((str[i]!='\0') && ((row*16)+(i+col))<32)
	{
		if( ( (row * 16) + (i + col) ) < 16)
		{
			LCD_write_Data(str[i]);
			//_delay_ms(10);
			i++;
		}
		else if(((row*16)+(i+col))==16 && line0 ==0 )
		{
			LCD_gotoXY(1,0);
			line0++;
		}
		else if(((row*16)+(i+col))<32 && line0 ==1 )
		{

			LCD_write_Data(str[i]);
			//_delay_ms(10);
			i++;
		}
	}
}

void LCD_Display_Str (const unsigned char *str)	// Function to send data to LCD
{
	unsigned char i=0;
	while (str[i] != '\0')
	{
		LCD_write_Data(str[i]);
		i++;
		_delay_ms(10);
	}
}

void LCD_CLEAR (void)
{
	LCD_write_cmd(lcd_Clear);
}

void LCD_Integer_TO_String (unsigned short int value)	// Display certain integer value on screen
{
	unsigned char number_str[30];
	itoa (value, number_str, 10);
	LCD_Display_Str(number_str);
}






