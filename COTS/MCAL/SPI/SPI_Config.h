/*=================================================================================*/
/*  File        : SPI_Config.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/15/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#ifndef COTS_MCAL_SPI_SPI_CONFIG_H_
#define COTS_MCAL_SPI_SPI_CONFIG_H_


/*===============================================*/
/*       Select MSB or LSB Send at First         */
/*-----------------------------------------------*/
#define     MSB_FIRST                      0
#define     LSB_FIRST                      1
/*===============================================*/
#define     DATA_ORDER      MSB_FIRST
/*===============================================*/

/*===============================================*/
/*   Select Clock Polarity Raisinr or Falling    */
/*-----------------------------------------------*/
#define     RAISING_Leading_Edge           0
#define     FALLING_Leading_Edge           1
/*===============================================*/
#define     CLK_POLARITY        RAISING_Leading_Edge
/*===============================================*/

/*===============================================*/
/* Select Clock Phase Sample or setup on Leading */
/*-----------------------------------------------*/
#define     SAMPLE_Leading_Edge            0
#define     SETUP_Leading_Edge             1
/*===============================================*/
#define     CLK_PHASE            SAMPLE_Leading_Edge
/*===============================================*/

/*===============================================*/
/*        SPI Prescaler Selection        */
/*---------------------------------------*/
#define     PRESCALER_DIVISION_BY_4       4
#define     PRESCALER_DIVISION_BY_16      16
#define     PRESCALER_DIVISION_BY_64      64
#define     PRESCALER_DIVISION_BY_128     128
#define     PRESCALER_DIVISION_BY_2       2
#define     PRESCALER_DIVISION_BY_8       8
#define     PRESCALER_DIVISION_BY_32      32
/*===============================================*/
#define     PRESCALER           PRESCALER_DIVISION_BY_16
/*===============================================*/

#endif /* COTS_MCAL_SPI_SPI_CONFIG_H_ */
