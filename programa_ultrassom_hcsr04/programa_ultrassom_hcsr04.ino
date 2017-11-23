//Leitura de distância com o sensor HCSR04
#include <Ultrasonic.h>
 Ultrasonic ultrassom(2,4); // define o nome do sensor(ultrassom)
//e onde esta ligado o trig(8) e o echo(7) respectivamente

#define SPEAKER 12 //Pin number of the speaker

#include <Servo.h>
 
#define SERVO 9 // Porta Digital 6 PWM
 
Servo s; // Variável Servo
int pos; // Posição Servo

long distancia;
 
// Esta função "setup" roda uma vez quando a placa e ligada ou resetada

 void setup() {
 Serial.begin(9600); //Habilita Comunicação Serial a uma taxa de 9600 bauds.
   s.attach(SERVO);
  Serial.begin(9600);
  s.write(0); // Inicia motor posição zero
 }
 
// Função que se repete infinitamente quando a placa é ligada
 void loop()
 {
   distancia = ultrassom.Ranging(CM);// ultrassom.Ranging(CM) retorna a distancia em
                                     // centímetros(CM) ou polegadas(INC)
   Serial.print(distancia); //imprime o valor da variável distancia
   Serial.println("cm");
   if (distancia <= 180){
    tone(SPEAKER,262,100);
    s.write(distancia);
   }
   delay(200);
 }
