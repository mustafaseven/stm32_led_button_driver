
#include "stm32f4xx_hal.h"

void buttondriver_init()
{
	RCC->AHB1ENR |= (0x00000001);

	GPIOA->MODER &= ~(1<<1);
	GPIOA->MODER &= ~(0x00000001);
}
int buttondriver_get_state()
{
	 if(GPIOA->IDR & (0x00000001))
	 {
		 return 1;
	 }
	 else
	 {
		 return 0;
	 }
}
