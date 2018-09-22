# Embedded Systems Lab 1: Button Blick 
Kevin Purcell
Embedded systems section 4
September 21, 2018
# Functionality
The main function of these programs is to demonstrate the use and implementation of a button on the microprocessors. Using the MSP430G2553 and the MSP430FR2311 microprocessors, we were able to toggle the LED when the button was pressed in order to control the state of the LED.
# Valid INputs/Ouputs
In order to successfully understand this program, for the MSP430G2553 port 1.0 is configured to an LED and port 1.3 is configured to a button. For the MSP430FR2311 port 1.0 is configured to the LED again, however the button is configured to port 1.4.
# Description of Code
Both codes work in the same way where the button on either microprocessor is pushed and the LED will toggle. If the button is pushed again it will reset the LED and turn it off.  However, when if the button is not pressed to reset the LED, the LED will continue to toggle until the delay runs.
