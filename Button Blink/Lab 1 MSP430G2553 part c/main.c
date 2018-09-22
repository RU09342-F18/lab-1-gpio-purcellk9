#include <msp430.h>


/**
 * blink.c
 */
void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;       // stop watchdog timer
    P1DIR |= 0x01;                  // configure P1.0 as output (LED)
    P1DIR &= ~0x08;                  // configure P1.3 as output (button)

     volatile unsigned int i; // volatile to prevent optimization

    while(1)
    {
        if (!(P1IN & 0x08))    // if the button is pressed then the LED
        {
            P1OUT ^= 0x01;    // toggle P1.0
        }
        for (i=10000; i>0; i--);    //delay
    }
}
