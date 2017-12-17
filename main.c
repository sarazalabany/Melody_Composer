#include <msp430.h> 
#include <templateEMP.h>

/**
 * main.c
 */
void main(void)
{

       initMSP ();

       P3DIR |= BIT6 ; // P3 .6 output for PWM
       P3SEL |= BIT6 ; // P3 .6 TA0 .2 option
       TA0CCTL2 = OUTMOD_3 ; // CCR2 set / reset
       TA0CTL = TASSEL_2 + MC_1 ; // SMCLK ; MC_1 -> up mode ;

       while(1)
       {

       }

	

}



void melody2_play()
{
    P1IE &=~ BIT5 ; // disaable interrupt
    int k;
    for( k=0; k<2; k++)
       {
               TA0CCR0 =Eb_per;                   //Eb
               TA0CCR2 =Eb_high;
               __delay_cycles(200000); //delay of one second

               TA0CCR0 =E4_per;                        //E
               TA0CCR2 =E4_high;
               __delay_cycles(400000); //delay of one second

               TA0CCR0 = Gb_per;                         //Gb
               TA0CCR2 = Gb_high;
               __delay_cycles(200000); //delay of one second

               TA0CCR0 =G4_per;                       //G4
               TA0CCR2 =G4_high;
               __delay_cycles(400000); //delay of one second
       }
               TA0CCR0 =C4_per;                       //C4
               TA0CCR2 =C4_high;
               __delay_cycles(200000); //delay of one second

               TA0CCR0 =B4_per;                       //B4
               TA0CCR2 =B4_high;
               __delay_cycles(400000); //delay of one second

               TA0CCR0 =E4_per;                       //E4
               TA0CCR2 =E4_high;
               __delay_cycles(200000); //delay of one second

               TA0CCR0 =G4_per;                       //G4
               TA0CCR2 =G4_high;
               __delay_cycles(200000); //delay of one second

               TA0CCR0 =B4_per;                       //B4
               TA0CCR2 =B4_high;
               __delay_cycles(200000); //delay of one second

               TA0CCR0 =Bb_per;                       //Bb
               TA0CCR2 =Bb_high;
               __delay_cycles(400000); //delay of one second
       P1IE |= BIT5 ; // enable interrupt
}
