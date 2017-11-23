

//***************************************/
//Program 1 for generating sound using the tone function
//***************************************/
#define BEATTIME 200 //Length of the generated tone (msec)
#define SPEAKER 12 //Pin number of the speaker
void setup() {
}
void loop() {
tone(SPEAKER,262,BEATTIME) ; // Do
delay(1000) ;
tone(SPEAKER,294,BEATTIME) ; // Re
delay(1000) ;
tone(SPEAKER,330,BEATTIME) ; // Mi
delay(1000) ;
tone(SPEAKER,349,BEATTIME) ; // Fa
delay(1000) ;
tone(SPEAKER,392,BEATTIME) ; // So
delay(1000) ;
tone(SPEAKER,440,BEATTIME) ; // La
delay(1000) ;
tone(SPEAKER,494,BEATTIME) ; // Si
delay(1000) ;
tone(SPEAKER,523,BEATTIME) ; // Do
delay(1000) ;
}

