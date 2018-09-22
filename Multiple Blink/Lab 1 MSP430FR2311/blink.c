//***************************************************************************************
//  MSP430 Blink the LED Demo - Software Toggle P1.0
//
//  Description; Toggle P1.0 by xor'ing P1.0 inside of a software loop.
//  ACLK = n/a, MCLK = SMCLK = default DCO
//
//                MSP430x5xx
//             -----------------
//         /|\|              XIN|-
//          | |                 |
//          --|RST          XOUT|-
//            |                 |
//            |             P1.0|-->LED
//
//  Texas Instruments, Inc
//  July 2013
//***************************************************************************************

#include <msp430.h>

void main(void) {
    WDTCTL = WDTPW | WDTHOLD;               // Stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                            // to activate previously configured port settings
        P1DIR |= 0x01;                      // Set P1.0 to output direction
        P2DIR |= 0x01;                      // Set P2.0 to output direction
        P1DIR &= ~0x02;


        volatile unsigned int i;        // volatile to prevent optimization
        int A = 0;                      // difine integer A = 0
        int B = 0;                      // difine integer B = 0
        int x = 20;                     // difine integer x = 0
        while (1)                       // infinte loop
        {
            if (A >= x/2)               // if A is great than or equal to 10, LED 1 will blink and then A will be reset to 0
            {
                P1OUT ^= 0x01;           // toggle P1.0
                A = 0;
            }
            else                       // if A less than 10, then A will continue to count up
            {
                A++;
            }
            if (B >= x)                 // if A is great than or equal to 20, LED 2 will blink and then B will be reset to 0
            {
                P2OUT ^= 0x01;          // toggle P2.0
                B = 0;
            }
            else                        // if B less than 20, then B will continue to count up
            {
                B++;
            }
            for(i=1000; i>0; i--);      // delay
        }
}
