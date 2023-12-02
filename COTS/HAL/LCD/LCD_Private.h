/*=================================================================================*/
/*  File        : LCD_Private.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/8/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#ifndef COTS_HAL_LCD_LCD_PRIVATE_H_
#define COTS_HAL_LCD_LCD_PRIVATE_H_

#define lcd_Clear           	0x01          /* replace all characters with ASCII 'space'                       */
#define lcd_Home            	0x02          /* return cursor to first position on first line                   */
#define lcd_EntryMode       	0x06          // shift cursor from left to right on read/write
#define lcd_DisplayOff      	0x08          // turn display off
#define lcd_DisplayOn      		0x0C          // display on, cursor off, don't blink character
#define lcd_FunctionReset   	0x30          // reset the LCD
#define lcd_FunctionSet8bit 	0x38          // 8-bit data, 2-line display, 5 x 7 font
#define lcd_SetCursor           0x80		  // Force cursor to beginning of the first line
#define lcd_Move_Cursor_Left    0x10		  // Move Cursor one bit to Left
#define lcd_Move_Cursor_Right   0x14		  // Move Cursor one bit to Right
#define lcd_Set_CURSOR_OFF      0x0C
#define lcd_Set_CURSOR_ON       0x0E

#endif /* COTS_HAL_LCD_LCD_PRIVATE_H_ */
