#include <msp430.h>
#include <templateEMP.h>
#include <PlayMelody.h>


//serialWrite ( i ); //this seems to print the normal value
//serialPrintInt ( i ) ; //this one prints a number
//serialPrint ( i ); //this one prints character char
//serialPrintln ("the number is= ");
int k=0, u=0, count=0;
int i,u; //where the ascii code of the letter is going to be saved (in decimal)
char Tone_char[10];
char Cs4Tone[3]={'C','s','4'};
char C4Tone[3]={'C','4'};
char Ds4Tone[3]={'D','s','4'};

void readSerial()
{


    if (serialAvailable() > 0)
       {
        i=serialRead();

                if(i == 99) //C
              {
                  Tone_char[k]= 'C';

              }
              else if(i== 100) //D
              {
                  Tone_char[k]= 'D';
              }

              else if(i == 101) //E
              {
                  Tone_char[k]= 'E';
              }

              else if(i == 102) //F
              {
                  Tone_char[k]= 'F';
              }

              else if(i == 103) //G
              {
                  Tone_char[k]= 'G';
              }

              else if(i == 97) //A
              {
                  Tone_char[k]= 'A';
              }
              else if(i == 98) //B
              {
                  Tone_char[k]= 'B';
              }

              else if(i == 115) //s
               {
                  Tone_char[k]= 's';
               }

              else if(i == 35) //#
              {
                  Tone_char[k]= '#';
              }
              else if(i == 95) //_

              {
                  Tone_char[k]= '_';
              }
              else if(i == 49) //1

              {
                  Tone_char[k]= '1';
              }

              else if(i == 50) //2

              {
                  Tone_char[k]= '2';
              }

              else if(i == 51) //3

              {
                  Tone_char[k]= '3';
              }

              else if(i == 52) //4

              {
                  Tone_char[k]= '4';
              }
              else if(i == 56) //8

              {
                  Tone_char[k]= '8';
              }

       k++ ;
       if (i==32) //if there is a space we print the first tone
       {

           for(u=0; u<3 ; u++)
            {
               if (Tone_char[u]== Cs4Tone[u] )
               {
                  count++;
               }

            }

           if (count==3) //the tone is Cs4
           {

               serialPrintln ("heya di ");
               //TA0CCR0 =C4_P;                   //
               //TA0CCR2 =C4_H;
               //__delay_cycles(200000); //delay of one second
               playTone(Cs4_P, Cs4_H);

           }
       }


        }
       }

void playTone(int Tone_P, int Tone_H)
{
    TA0CCR0 =Tone_P;
    TA0CCR2 =Tone_H;
    __delay_cycles(600000); //delay of one second

}



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


