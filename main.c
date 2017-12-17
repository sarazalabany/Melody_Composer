#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
       initMSP ();

       P3DIR |= BIT6 ; // P3 .6 output for PWM
       P3SEL |= BIT6 ; // P3 .6 TA0 .2 option
       TA0CCTL2 = OUTMOD_3 ; // CCR2 set / reset
       TA0CTL = TASSEL_2 + MC_1 ; // SMCLK ; MC_1 -> up mode ;

       while(1)
       {

       }
	
	return 0;
}
