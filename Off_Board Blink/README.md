# Embedded Systems Lab 1: Button Blick 
Kevin Purcell
Embedded systems section 4
September 21, 2018
# Functionality
The main function of these programs is to demonstrate the use and implementation of multiple LEDs toggling at different speeds on the microprocessors. Using the MSP430G2553 microprocessor, we were able to toggle two different LEDs at varying speeds on a breadboard through implementing the code written in order to control the state of the LEDs.
# Valid INputs/Ouputs
In order to successfully understand this program, the MSP430G2553 conists of input integers A, B, and X. The MSP430G2553 used port 1.0 and port 1.6 configured to the LEDs, while the button was configured to port 1.3. In this case the button was configured to port 1.1 of the microprocessor. 
# Description of Code
The code works while within the infinite while loop where if A is great than or equal to 10 (one half of X), LED 1 will blink and then A will be reset to 0. While for LED 2, if B is great than or equal to 20 (X), LED 2 will blink and then B will be reset to 0.
