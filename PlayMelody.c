#include <msp430.h>
#include <templateEMP.h>
#include <PlayMelody.h>

void init()
{
    initMSP ();
    P3DIR |= BIT6 ; // P3 .6 output for PWM
    P3SEL |= BIT6 ; // P3 .6 TA0 .2 option
    TA0CCTL2 = OUTMOD_3 ; // CCR2 set / reset
    TA0CTL = TASSEL_2 + MC_1 ; // SMCLK ; MC_1 -> up mode ;
}

void melodyTest()
{


    TA0CCR0 =C4_P;                   //Eb
    TA0CCR2 =C4_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =Cs4_P;                   //Eb
    TA0CCR2 =Cs4_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =D4_P;                   //Eb
    TA0CCR2 =D4_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =Ds4_P;                   //Eb
    TA0CCR2 =Ds4_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =E4_P;                   //Eb
    TA0CCR2 =E4_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =F4_P;                   //Eb
    TA0CCR2 =F4_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =Fs4_P;                   //Eb
    TA0CCR2 =Fs4_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =G4_P;                   //Eb
    TA0CCR2 =G4_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =Gs4_P;                   //Eb
    TA0CCR2 =Gs4_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =A4_P;                   //Eb
    TA0CCR2 =A4_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =As4_P;                   //Eb
    TA0CCR2 =As4_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =B4_P;                   //Eb
    TA0CCR2 =B4_H;
    __delay_cycles(600000); //delay of one second


    TA0CCR0 =C5_P;                   //Eb
    TA0CCR2 =C5_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =Cs5_P;                   //Eb
    TA0CCR2 =Cs5_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =D5_P;                   //Eb
    TA0CCR2 =D5_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =Ds5_P;                   //Eb
    TA0CCR2 =Ds5_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =E5_P;                   //Eb
    TA0CCR2 =E5_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =F5_P;                   //Eb
    TA0CCR2 =F5_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =Fs5_P;                   //Eb
    TA0CCR2 =Fs5_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =G5_P;                   //Eb
    TA0CCR2 =G5_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =Gs5_P;                   //Eb
    TA0CCR2 =Gs5_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =A5_P;                   //Eb
    TA0CCR2 =A5_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =As5_P;                   //Eb
    TA0CCR2 =As5_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =B5_P;                   //Eb
    TA0CCR2 =B5_H;
    __delay_cycles(600000); //delay of one second

    TA0CCR0 =C6_P;                   //Eb
        TA0CCR2 =C6_H;
        __delay_cycles(600000); //delay of one second

        TA0CCR0 =Cs6_P;                   //Eb
        TA0CCR2 =Cs6_H;
        __delay_cycles(600000); //delay of one second

        TA0CCR0 =D6_P;                   //Eb
        TA0CCR2 =D6_H;
        __delay_cycles(600000); //delay of one second

        TA0CCR0 =Ds6_P;                   //Eb
        TA0CCR2 =Ds6_H;
        __delay_cycles(600000); //delay of one second

        TA0CCR0 =E6_P;                   //Eb
        TA0CCR2 =E6_H;
        __delay_cycles(600000); //delay of one second

        TA0CCR0 =F6_P;                   //Eb
        TA0CCR2 =F6_H;
        __delay_cycles(600000); //delay of one second

        TA0CCR0 =Fs6_P;                   //Eb
        TA0CCR2 =Fs6_H;
        __delay_cycles(600000); //delay of one second

        TA0CCR0 =G6_P;                   //Eb
        TA0CCR2 =G6_H;
        __delay_cycles(600000); //delay of one second

        TA0CCR0 =Gs6_P;                   //Eb
        TA0CCR2 =Gs6_H;
        __delay_cycles(600000); //delay of one second

        TA0CCR0 =A6_P;                   //Eb
        TA0CCR2 =A6_H;
        __delay_cycles(600000); //delay of one second

        TA0CCR0 =As6_P;                   //Eb
        TA0CCR2 =As6_H;
        __delay_cycles(600000); //delay of one second

        TA0CCR0 =B6_P;                   //Eb
        TA0CCR2 =B6_H;
        __delay_cycles(600000); //delay of one second
}

void melodyPlay()
{



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

}
