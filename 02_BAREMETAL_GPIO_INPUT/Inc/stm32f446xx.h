/*
 * stm32f446xx.h
 *
 *  Created on: 20-Jul-2026
 *      Author: Herin
 */

#ifndef STM32F446XX_H_
#define STM32F446XX_H_

#include <stdint.h>
#include <stdio.h>

/*-------------------BASE ADDRR--------------------*/
#define GPIOA_BASEADDR		0x40020000U
#define GPIOB_BASEADDR		0x40020400U
#define GPIOC_BASEADDR		0x40020800U
#define GPIOD_BASEADDR		0x40020C00U
#define RCC_BASEADDR		0x40023800U


/*-------------------STRUCTURE--------------------*/
typedef struct
{
	volatile uint32_t MODER;	//0x00
	volatile uint32_t OTYPER;	//0x04
	volatile uint32_t OSPEEDR;	//0x08
	volatile uint32_t PUPDR;	//0x0C
	volatile uint32_t IDR;		//0x10
	volatile uint32_t ODR;		//0x14
	volatile uint32_t BSRR; 	//0x18
} GPIO_RegDef_t;

typedef struct
{
    volatile uint32_t CR;
    volatile uint32_t PLLCFGR;
    volatile uint32_t CFGR;
    volatile uint32_t CIR;

    volatile uint32_t AHB1RSTR;

    uint32_t RESERVED0[7];

    volatile uint32_t AHB1ENR;

} RCC_RegDef_t;

#define RCC ((RCC_RegDef_t *)RCC_BASEADDR)
#define GPIOA 	((GPIO_RegDef_t *)GPIOA_BASEADDR)
#define GPIOB 	((GPIO_RegDef_t *)GPIOB_BASEADDR)
#define GPIOC 	((GPIO_RegDef_t *)GPIOC_BASEADDR)
#define GPIOD 	((GPIO_RegDef_t *)GPIOD_BASEADDR)

#endif /* STM32F446XX_H_ */

