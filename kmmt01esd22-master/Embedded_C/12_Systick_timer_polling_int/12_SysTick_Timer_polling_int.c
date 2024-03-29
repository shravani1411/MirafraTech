//Lab Experiment 12: Toggles RED LED every 100msec delay using SysTick timer With Interrupt using 16MHZ system clock source.
                           
//RCC registers
#define RCC_AHB1ENR (*(volatile int *)0x40023830) //RCC system clock
//GPIOB registers
#define GPIO_PORTB_MODE (*(volatile int *)0x40020400) //GPIOB MODE register
#define GPIO_PORTB_IDR (*(volatile int *)0x40020410) //GPIOB input data register
#define GPIO_PORTB_ODR (*(volatile int *)0x40020414) //GPIOB output data register
#define STK_CTRL             (*(volatile int *)0xE000E010)
#define STK_LOAD             (*(volatile int *)0xE000E014)
#define STK_VAL             (*(volatile int *)0xE000E018)

void SysTick_Init(void);
void GPIO_PORT_B_Init(void);

void GPIO_PORT_B_Init(void)
{
  RCC_AHB1ENR         |= 0x02;              //Enable clock for GPIO_PORT_A
while(!(RCC_AHB1ENR & 0x02));             //Wait untill Clock Enable
 GPIO_PORTB_MODE     &= ~(0x03<<26);       //Clear 26 and 27 bits for setting Output mode
 GPIO_PORTB_MODE     |= (0x01<<26);        //Set 26 bit for PB13 Output mode for RED LED
}

void SysTick_Init(void)
{
STK_CTRL |= 0x07;                       //Select Clock source as 16mhz( Processor clock (AHB))  |  SysTick exception request enable   |   Systick Counter enable  
STK_VAL   = 0x123;                     //write of any value clears the field to 0, and also clears the COUNTFLAG bit in the STK_CTRL register to 0.
 STK_LOAD  = 1600000;                   //16000 for 100ms delay
}

void SysTick_Handler(void)
{
GPIO_PORTB_ODR ^=(0x1<<13);//set 13th bit pos to red led is off
while(( STK_CTRL & 0x1<<16 )==0);     //Wait untill COUNTFLAG will set( Returns 1 if timer counter reaches to 0 )
}


int main(void)
{
GPIO_PORT_B_Init();
SysTick_Init();

while(1)
{
// GPIO_PORTB_ODR ^= (0x01<<13);           //Toggle PB13 LED at Every 100ms Delay
// while(( STK_CTRL & 0x1<<16 )==0);     //Wait untill COUNTFLAG will set( Returns 1 if timer counter reaches to 0 )
}
}
