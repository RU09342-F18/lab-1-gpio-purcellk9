#include <msp430.h>				


/**
 * blink.c
 */
void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;		// stop watchdog timer
	P1DIR |= 0x01;					// configure P1.0 as output
	P1DIR |= BIT6;                  // configure P1.6 as output
	P1DIR &= ~0x08;


    volatile unsigned int i;        // volatile to prevent optimization
    int A = 0;                      // define integer A = 0
    int B = 0;                      // define integer B = 0
    int x = 20;                     // define integer X = 20
    while (1)                       // infinte loop
    {
       if (A >= x/2)                // if A is great than or equal to 10, LED 1 will blink and then A will be reset to 0
        {
            P1OUT ^= 0x01;          // toggle P1.0
            A = 0;
        }
        else                        // if A less than 10, then A will continue to count up
        {
            A++;
        }
        if (B >= x)                 // if B is great than or equal to 20, LED 2 will blink and then B will be reset to 0
        {
            P1OUT ^= BIT6;          // toggle P1.6
            B = 0;
        }
        else                        // if B less than 20, then B will continue to count up
        {
            B++;
        }
        for(i=1000; i>0; i--);      //delay
    }
}
