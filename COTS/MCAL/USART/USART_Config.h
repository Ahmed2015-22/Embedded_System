/*=================================================================================*/
/*  File        : USART_Config.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/14/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/

#ifndef COTS_MCAL_USART_USART_CONFIG_H_
#define COTS_MCAL_USART_USART_CONFIG_H_

/*===============================================*/
/*          Select BAUD Rate & CPU CLOCK         */
/*-----------------------------------------------*/
#define     CPU_CLK             8000000
#define     BAUD_RATE           9600
/*===============================================*/

/*===============================================*/
/*   Select Normal or Double Speed Transsmition  */
/*-----------------------------------------------*/
#define     DOUBBLE_SPEED           0
#define     NORMAL_SPEED            1
/*===============================================*/
#define     SPEED            DOUBBLE_SPEED
/*===============================================*/

/*===============================================*/
/*    Select Parity Mode EVEN , ODD , DISABLE    */
/*-----------------------------------------------*/
#define     DISABLE                  0
#define     EVEN                     1
#define     ODD                      2
/*===============================================*/
#define     Parity_Mode             DISABLE
/*===============================================*/

/*===============================================*/
/*        Select STOP BIT  { ONE , TWO }         */
/*-----------------------------------------------*/
#define     ONE                      0
#define     TWO                      1
/*===============================================*/
#define     STOP_BIT                ONE
/*===============================================*/

#endif /* COTS_MCAL_USART_USART_CONFIG_H_ */
