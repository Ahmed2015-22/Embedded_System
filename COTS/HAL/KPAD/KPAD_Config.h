/*=================================================================================*/
/*  File        : LCD_Config.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/8/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#ifndef COTS_HAL_KPAD_KPAD_CONFIG_H_
#define COTS_HAL_KPAD_KPAD_CONFIG_H_

//	Keypad port Configuration
#define KEYPAD_PORT_DIR		DDRC
#define KEYPAD_PORT_OUT		PORTC
#define KEYPAD_PORT_IN		PINC

//	Keypad Configuration for Rows & ColumnS
#define	N_ROW 4
#define N_COL 4

#endif /* COTS_HAL_KPAD_KPAD_CONFIG_H_ */
