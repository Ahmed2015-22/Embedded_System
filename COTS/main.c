/*=================================================================================*/
/*  File        : main.c                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/7/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/

#include "app.h"
int main()
{
	Preph_init();
	TIMER1_voidInit();
	LCD_initialization();
	u8 Key = 0;
	u8 mode = 0;
	u16 Comp_Pass = 0;
	u16 Saved_Pass = 1234;
	u16 Reversed_Pass = 4321;
	u32 Get_Reversed_Pass = 0;
	u32 Temp_Pass = 0;
	LCD_Display_Str(" Welcome Home");
	_delay_ms(1000);
	LCD_CLEAR();
	LCD_Display_Str("  Prepared By");
	LCD_writestring("ENG/Ahmed Talat", 1 , 0);
	_delay_ms(1000);
	while(1)
	{
		LCD_CLEAR();
		LCD_Display_Str("Choose A Mode");
		_delay_ms(1000);
		LCD_CLEAR();
		LCD_Display_Str("1-Enter Password");
		LCD_writestring("2-Change Password" , 1 , 0);
		mode = Keypad_GetPressedKey();
		if(1 == mode)
		{
			LCD_CLEAR();
			LCD_Display_Str("Password : ");
			for(u8 i = 0; i<4 ; i++)
			{
				LCD_write_cmd(lcd_Set_CURSOR_ON);
				_delay_ms(100);
				LCD_write_cmd(lcd_Set_CURSOR_OFF);
				Key = Keypad_GetPressedKey();
				if((Key>=0) && (Key <=9))
				{
					LCD_Integer_TO_String(Key);
					_delay_ms(200);
					LCD_writestring("*",0,11+i);
				}
				else
				{
					LCD_CLEAR();
					LCD_writestring("Invalid Input",1,0);
					_delay_ms(500);
					break;
				}
				Comp_Pass += Key;
				Comp_Pass = Comp_Pass *10;
			}
			Comp_Pass = Comp_Pass/10;
			_delay_ms(500);
			LCD_CLEAR();
			if(Comp_Pass == Saved_Pass)
			{
				LCD_Display_Str("  Welcome Back");
				LCD_gotoXY(1,3);
				LCD_Display_Str("Open Door");
				LED_Turn_ON(portB , pin0);
				SERVO_voidRotateSpecificAngle_OC1A(180);
				_delay_ms(2000);
				LED_Turn_OFF(portB , pin0);
				LCD_gotoXY(1,3);
				LCD_Display_Str("Close Door");
				LED_Turn_ON(portB , pin1);
				SERVO_voidRotateSpecificAngle_OC1A(90);
				_delay_ms(2000);
				LED_Turn_OFF(portB , pin1);
				LCD_CLEAR();
				Comp_Pass = 0;
			}
			else if(Comp_Pass == Reversed_Pass)
			{
				LCD_Display_Str("Calling police");
				_delay_ms(2000);
				LCD_CLEAR();
				Comp_Pass = 0;
			}
			else
			{
				LCD_Display_Str("Wronge Password");
				_delay_ms(2000);
				LCD_CLEAR();
				Comp_Pass = 0;
			}
		}
		if(2 == mode)
		{
			LCD_CLEAR();
			LCD_Display_Str("Old Pass : ");
			for(u8 i = 0; i<4 ; i++)
			{
				LCD_write_cmd(lcd_Set_CURSOR_ON);
				_delay_ms(100);
				LCD_write_cmd(lcd_Set_CURSOR_OFF);
				Key = Keypad_GetPressedKey();
				if((Key>=0) && (Key <=9))
				{
					LCD_Integer_TO_String(Key);
					_delay_ms(200);
					LCD_writestring("*",0,11+i);
				}
				else
				{
					LCD_CLEAR();
					LCD_writestring("Invalid Input",1,0);
					_delay_ms(500);
					break;
				}
				Comp_Pass += Key;
				Comp_Pass = Comp_Pass *10;
			}
			Comp_Pass = Comp_Pass/10;
			_delay_ms(500);
			LCD_CLEAR();
			if(Comp_Pass == Saved_Pass)
			{
				Comp_Pass = 0;
				Saved_Pass = 0;
				Reversed_Pass = 0;
				Get_Reversed_Pass = 0;

				LCD_Display_Str("New Pass : ");
				LCD_gotoXY(1,0);
				LCD_Display_Str("Just Numbers");
				for (u8 i = 0; i<4 ;i++)
				{
					LCD_write_cmd(lcd_Set_CURSOR_ON);
					_delay_ms(100);
					LCD_write_cmd(lcd_Set_CURSOR_OFF);
					Key = Keypad_GetPressedKey();
					if((Key>=0) && (Key <=9))
					{
						LCD_Integer_TO_String(Key);
						_delay_ms(200);
						LCD_writestring("*",0,11+i);
					}
					Saved_Pass += Key;
					Saved_Pass = Saved_Pass*10;
				}
				Saved_Pass = Saved_Pass/10;
				Temp_Pass = Saved_Pass;
				while(Temp_Pass > 0)
				{
					Get_Reversed_Pass = Temp_Pass%10;
					Reversed_Pass = (Reversed_Pass * 10) + Get_Reversed_Pass;
					Temp_Pass = Temp_Pass/10;
				}
				_delay_ms(500);
				LCD_CLEAR();
				LCD_Display_Str("Password changed");
				_delay_ms(500);
				LCD_CLEAR();
			}
			else
			{
				LCD_writestring("Wrong Password",0,1);
				_delay_ms(500);
				LCD_CLEAR();
				Comp_Pass = 0;
			}
		}
		/*else
		{
			LCD_CLEAR();
			//LCD_writestring("Invalid Input" , 0,1);
			_delay_ms(500);
		}*/
	}

	return 0;
}
