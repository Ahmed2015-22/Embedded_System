/*=================================================================================*/
/*  File        : LCD_Program.c                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/8/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#include "KPAD_Interface.h"

#if (N_COL == 3)

static u8 Keypad_4x3_adjustKeyNumber (u8 button_number);

#elif (N_COL == 4)

static u8 Keypad_4x4_adjustKeyNumber (u8 button_number);

#endif

u8 Keypad_GetPressedKey (void)
{
	unsigned char row, col;
	while(1)
	{
		for (col = 0; col < N_COL; col++)
		{
			KEYPAD_PORT_DIR = (0b00010000<< col);

			KEYPAD_PORT_OUT = (~(0b00010000<< col));
			for (row = 0; row < N_ROW; row++)
			{
				if (BIT_IS_CLEAR(KEYPAD_PORT_IN,row))
				{
					#if (N_COL == 3)

					return Keypad_4x3_adjustKeyNumber (((row*N_COL)+col+1));
					#elif (N_COL == 4)

					return Keypad_4x4_adjustKeyNumber (((row*N_COL)+col+1));

					#endif
				}
			}
		}
	}
}


#if (N_COL == 3)

static u8 Keypad_4x3_adjustKeyNumber (u8 button_number)
{
	switch (button_number)
	{
	case 10:	return '*';  break;
	case 11:
		return 0;
		break;
	case 12:	return '#';  break;
	default:    return button_number; break;
	}
}

#elif (N_COL == 4)

static u8 Keypad_4x4_adjustKeyNumber (u8 button_number)
{
	switch (button_number)
	{
	case 1:		return 7;    break;
	case 2:		return 8;    break;
	case 3:		return 9;    break;
	case 4:		return '/';    break;
	case 5:		return 4;    break;
	case 6:		return 5;    break;
	case 7:		return 6;    break;
	case 8:		return '*';    break;
	case 9:		return 1;    break;
	case 10:	return 2;    break;
	case 11:	return 3;    break;
	case 12:	return '-';    break;
	case 13:	return 'c';    break;
	case 14:	return 0;    break;
	case 15:	return '=';    break;
	case 16:	return '+';    break;
	default: return 0 ; break;
	}
}

#endif
