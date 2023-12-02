/*=================================================================================*/
/*  File        : DIO_Program.c                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/7/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/

#include "DIO_Interface.h"

void DIO_Set_Port_directio (DIO_PORT_ID port_id , DIO_direction direction)
{
	if( Output == direction )
	{
		switch(port_id)
		{
			case portA: DDRA= 0xFF; break;
			case portB: DDRB = 0xFF; break;
			case portC: DDRC = 0xFF; break;
			case portD: DDRD = 0xFF; break;
		}
	}
	else if ( Input == direction)
	{
		switch(port_id)
				{
					case portA: DDRA = 0x00; break;
					case portB: DDRB = 0x00; break;
					case portC: DDRC = 0x00; break;
					case portD: DDRD = 0x00; break;
				}
	}
}

void DIO_Set_Port_value(DIO_PORT_ID port_id,u8 value)
{
	switch(port_id)
	{
		case portA: PORTA = value; break;
		case portB: PORTB = value; break;
		case portC: PORTC = value; break;
		case portD: PORTD = value; break;
	}
}

void DIO_Set_Pin_directio(DIO_PORT_ID port_id,DIO_PIN_ID pin_id,DIO_direction direction)
{
	if((port_id<=portD) && (pin_id<=pin7))
	{
		if(Output == direction)
		{
			switch(port_id)
			{
				case portA : SET_BIT(DDRA , pin_id); break;
				case portB : SET_BIT(DDRB , pin_id); break;
				case portC : SET_BIT(DDRC , pin_id); break;
				case portD : SET_BIT(DDRD , pin_id); break;
			}
		}
		else if( Input == direction)
		{
			switch(port_id)
			{
				case portA : CLR_BIT(DDRA , pin_id); break;
				case portB : CLR_BIT(DDRB , pin_id); break;
				case portC : CLR_BIT(DDRC , pin_id); break;
				case portD : CLR_BIT(DDRD , pin_id); break;
			}
		}
	}
}

void DIO_Set_Pin_value(DIO_PORT_ID port_id,DIO_PIN_ID pin_id,DIO_value value)
{
	if((port_id<=portD) && (pin_id<=pin7))
	{
		if(High == value)
		{
			switch(port_id)
			{
				case portA : SET_BIT(PORTA,pin_id); break;
				case portB : SET_BIT(PORTB,pin_id); break;
				case portC : SET_BIT(PORTC,pin_id); break;
				case portD : SET_BIT(PORTD,pin_id); break;
			}
		}
		else if(Low == value)
		{
			switch(port_id)
			{
				case portA : CLR_BIT(PORTA,pin_id); break;
				case portB : CLR_BIT(PORTB,pin_id); break;
				case portC : CLR_BIT(PORTC,pin_id); break;
				case portD : CLR_BIT(PORTD,pin_id); break;
			}
		}
	}
}

void DIO_Connectpullup(DIO_PORT_ID port_id ,DIO_PIN_ID pin_id, DIO_value connect_pullup)
{
	if(High == connect_pullup)
	{
		switch(port_id)
		{
			case portA : SET_BIT(PORTA , pin_id); break;
			case portB : SET_BIT(PORTB , pin_id); break;
			case portC : SET_BIT(PORTC , pin_id); break;
			case portD : SET_BIT(PORTD , pin_id); break;
		}
	}
	else if(Low == connect_pullup)
	{
		switch(port_id)
		{
			case portA : CLR_BIT(PORTA,pin_id); break;
			case portB : CLR_BIT(PORTB,pin_id); break;
			case portC : CLR_BIT(PORTC,pin_id); break;
			case portD : CLR_BIT(PORTD,pin_id); break;
		}
	}
}

void DIO_Toggle_Pin(DIO_PORT_ID port_id,DIO_PIN_ID pin_id)
{
	if((port_id<=portD) && (pin_id<=pin7))
	{
		switch(port_id)
		{
			case portA : TOG_BIT(PORTA,pin_id); break;
			case portB : TOG_BIT(PORTB,pin_id); break;
			case portC : TOG_BIT(PORTC,pin_id); break;
			case portD : TOG_BIT(PORTD,pin_id); break;
		}
	}
}

DIO_value DIO_Get_Pin_Value(DIO_PORT_ID port_id,DIO_PIN_ID pin_id)
{
	DIO_value get;
	if((port_id<=portD) && (pin_id<=pin7))
	{
		switch(port_id)
		{
			case portA : get = GET_BIT(PINA,pin_id); break;
			case portB : get = GET_BIT(PINB,pin_id); break;
			case portC : get = GET_BIT(PINC,pin_id); break;
			case portD : get = GET_BIT(PIND,pin_id); break;
		}
	}
	return get;
}

