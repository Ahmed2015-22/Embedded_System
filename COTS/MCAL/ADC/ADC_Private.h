/*=================================================================================*/
/*  File        : ADC_Private.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/12/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#ifndef COTS_MCAL_ADC_ADC_PRIVATE_H_
#define COTS_MCAL_ADC_ADC_PRIVATE_H_

#define      ADMUX_REG             *((volatile u8*)0x27)
#define     ADCSRA_REG             *((volatile u8*)0x26)
#define       ADCH_REG             *((volatile u8*)0x25)   // Pointer to 8 bit ADCH to read Data From 8 BIT of ADC Data by Right Adjust.
#define       ADCL_REG             *((volatile u8*)0x24)
#define        ADC_REG             *((volatile u16*)0x24)  // Pointer to 16 bit ADCH and ADCL to read Data From 10 BIT of ADC Data.
#define      SFIOR_REG             *((volatile u8*)0x50)

#define     BUSY                    0
#define     NOT_BUSY                1

/*     Macros of Channel Number    */
#define     ADC0                    0
#define     ADC1                    1
#define     ADC2                    2
#define     ADC3                    3
#define     ADC4                    4
#define     ADC5                    5
#define     ADC6                    6
#define     ADC7                    7

#endif /* COTS_MCAL_ADC_ADC_PRIVATE_H_ */
