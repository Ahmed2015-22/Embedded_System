/*=================================================================================*/
/*  File        : DIO_Private.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/7/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#ifndef COTS_MCAL_DIO_DIO_PRIVATE_H_
#define COTS_MCAL_DIO_DIO_PRIVATE_H_

#define PORTA *((volatile unsigned char* const )0x3B)
#define DDRA *((volatile unsigned char* const )0x3A)
#define PINA *((volatile unsigned char* const )0x39)

#define PORTB *((volatile unsigned char* const )0x38)
#define DDRB *((volatile unsigned char* const )0x37)
#define PINB *((volatile unsigned char* const )0x36)

#define PORTC *((volatile unsigned char* const )0x35)
#define DDRC *((volatile unsigned char* const )0x34)
#define PINC *((volatile unsigned char* const )0x33)

#define PORTD *((volatile unsigned char* const )0x32)
#define DDRD *((volatile unsigned char* const )0x31)
#define PIND *((volatile unsigned char* const )0x30)

#endif /* COTS_MCAL_DIO_DIO_PRIVATE_H_ */
