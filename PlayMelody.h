//////////////////////////////////Freqs//////////////////////////
#define Cs4_F   277
#define C4_F    261
#define D4_F    293
#define Ds4_F   311
#define E4_F    329
#define F4_F    349
#define Fs4_F   369
#define G4_F    392
#define Gs4_F   415
#define A4_F    440
#define As4_F   466
#define B4_F    493

#define C5_F    523
#define Cs5_F   554
#define D5_F    587
#define Ds5_F   622
#define E5_F    659
#define F5_F    698
#define Fs5_F   739
#define G5_F    783
#define Gs5_F   830
#define A5_F    880
#define As5_F   932
#define B5_F    987

#define C6_F    1046
#define Cs6_F   1108
#define D6_F    1174
#define Ds6_F   1244
#define E6_F    1318
#define F6_F    1396
#define Fs6_F   1479
#define G6_F    1567
#define Gs6_F   1661
#define A6_F    1760
#define As6_F   1864
#define B6_F    1975
////////////////////////////////////////////////////////////////////////////
//////////////////////////////////periods//////////////////////////
#define Cs4_P   3610
#define C4_P    3831
#define D4_P    3412
#define Ds4_P   3215
#define E4_P    3039
#define F4_P    2865
#define Fs4_P   2710
#define G4_P    2551
#define Gs4_P   2409
#define A4_P    2272
#define As4_P   2145
#define B4_P    2028

#define C5_P    1912
#define Cs5_P   1805
#define D5_P    1703
#define Ds5_P   1607
#define E5_P    1517
#define F5_P    1432
#define Fs5_P   1353
#define G5_P    1277
#define Gs5_P   1204
#define A5_P    1136
#define As5_P   1072
#define B5_P    1013

#define C6_P    956
#define Cs6_P   902
#define D6_P    851
#define Ds6_P   803
#define E6_P    758
#define F6_P    716
#define Fs6_P   676
#define G6_P    638
#define Gs6_P   602
#define A6_P    568
#define As6_P   536
#define B6_P    506
////////////////////////////////////////////////////////////////////////////
//////////////////////////////////Hig_values//////////////////////////
#define Cs4_H   1805
#define C4_H    1915
#define D4_H    1706
#define Ds4_H   1607
#define E4_H    1519
#define F4_H    1432
#define Fs4_H   1355
#define G4_H    1275
#define Gs4_H   1204
#define A4_H    1136
#define As4_H   1072
#define B4_H    1014

#define C5_H    956
#define Cs5_H   902
#define D5_H    851
#define Ds5_H   803
#define E5_H    758
#define F5_H    716
#define Fs5_H   676
#define G5_H    638
#define Gs5_H   602
#define A5_H    568
#define As5_H   536
#define B5_H    506

#define C6_H    478
#define Cs6_H   451
#define D6_H    425
#define Ds6_H   401
#define E6_H    379
#define F6_H    358
#define Fs6_H   338
#define G6_H    319
#define Gs6_H   301
#define A6_H    284
#define As6_H   268
#define B6_H    253

///////////////////////////Functions////////////////////////
void init();
void melodyTest();
void readSerial();
void defineTone();
void playTone(int Tone_P, int Tone_H);
