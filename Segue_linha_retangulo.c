#include <Servo.h>
Servo ServoD;
Servo ServoE;
// código para fazer um segue linha andar um retângulo predefinido

void setup(){
 ServoD.attach(5);
 ServoE.attach(6);
 int var = 900;
}
void vira(int var)
{
   ServoD.write(90);
 ServoE.write(-180);
  delay(var); //aguarda 900 milisegundos
  ServoD.write(180);
 ServoE.write(-180);
 delay(200); //anda a parte curta
 ServoD.write(90);
 ServoE.write(-180);
  delay(var); //aguarda 900 milisegundos
  }
void loop(){
   int var = 900;
 ServoD.write(180);
 ServoE.write(-180);
 delay(2000); //anda a parte longa
vira(var);
  ServoD.write(180);
 ServoE.write(-180);
 delay(1500); //anda a parte longa
vira(var);
}