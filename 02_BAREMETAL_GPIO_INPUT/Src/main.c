#include "stm32f446xx.h"

int main(void)
{
    // Enable GPIOA and GPIOC clocks
    RCC->AHB1ENR |= (1 << 0) | (1 << 2);

    // PA5 -> Output (Onboard LED)
    GPIOA->MODER &= ~(3 << (5 * 2));
    GPIOA->MODER |=  (1 << (5 * 2));

    // PC13 -> Input (USER Button)
    GPIOC->MODER &= ~(3 << (13 * 2));

    while(1)
    {
        if(GPIOC->IDR & (1 << 13))
        {
            // Button NOT pressed
            GPIOA->ODR &= ~(1 << 5);
        }
        else
        {
            // Button pressed
            GPIOA->ODR |= (1 << 5);
        }
    }
}
