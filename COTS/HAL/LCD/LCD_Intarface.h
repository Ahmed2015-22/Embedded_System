/*=================================================================================*/
/*  File        : LCD_Interface.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/8/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#ifndef COTS_HAL_LCD_LCD_INTARFACE_H_
#define COTS_HAL_LCD_LCD_INTARFACE_H_

#include <util/delay.h>
#include "LCD_Private.h"
#include "LCD_Config.h"
#include "../../MCAL/DIO/DIO_Interface.h"

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

#define FiveTimesSeven 0
#define FiveTimesTen 1

#define FONT  FiveTimesSeven

void LCD_initialization();

void LCD_write_cmd(unsigned char cmd);

void LCD_write_Data(unsigned char data);

void LCD_gotoXY(unsigned char row,unsigned char col);

void LCD_writestring(unsigned char* str, unsigned char row,unsigned char col);

void LCD_Display_Str (const unsigned char *str);

void LCD_CLEAR (void);

void LCD_Integer_TO_String (unsigned short int value);


#endif /* COTS_HAL_LCD_LCD_INTARFACE_H_ */
