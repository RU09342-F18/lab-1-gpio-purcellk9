#include "msp.h"


/**
 * main.c
 */
void main(void)
{
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;		// stop watchdog timer
	P1DIR |= 0x01;                  // configure P1.0 as output
    P1DIR |= BIT4;                  // configure P1.4 as output (button)

     volatile unsigned int i; // volatile to prevent optimization

    while(1)
    {
        if (!(P1IN & BIT4))             // if the button is pressed then the LED
        {
            P1OUT ^= 0x01;              // toggle P1.0
        }
        for (i=10000; i>0; i--);        // delay
    }
}
