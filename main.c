#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
<<<<<<< HEAD

    while (1)
    {
        for (int i=0; i<3; i++)
        {

        }
    }
=======
       initMSP ();

       P3DIR |= BIT6 ; // P3 .6 output for PWM
       P3SEL |= BIT6 ; // P3 .6 TA0 .2 option
       TA0CCTL2 = OUTMOD_3 ; // CCR2 set / reset
       TA0CTL = TASSEL_2 + MC_1 ; // SMCLK ; MC_1 -> up mode ;

       while(1)
       {

       }
>>>>>>> FirstDay
	
	return 0;
}
