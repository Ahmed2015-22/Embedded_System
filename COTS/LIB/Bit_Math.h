/*=================================================================================*/
/*  File        : Bit_Math.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/7/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#ifndef COTS_LIB_BIT_MATH_H_
#define COTS_LIB_BIT_MATH_H_

#define SET_BIT(VAR,BITNO)             (VAR) |=  (1 << (BITNO))
#define CLR_BIT(VAR,BITNO)             (VAR) &= ~(1 << (BITNO))
#define CLEAR_BIT(VAR,BITNO)		   (VAR) &= ~(1 << (BITNO))
#define TOG_BIT(VAR,BITNO)             (VAR) ^=  (1 << (BITNO))
#define GET_BIT(VAR,BITNO) 			   (((VAR) >> (BITNO)) & 0x01)
#define BIT_IS_SET(VAR,BITNO)    	   (VAR & (1<<BITNO))
#define BIT_IS_CLEAR(VAR,BITNO)  	   (!(VAR & (1<<BITNO)))


#endif /* COTS_LIB_BIT_MATH_H_ */
