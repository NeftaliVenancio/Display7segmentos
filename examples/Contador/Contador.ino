//Ejemplo Contador con la libreria dis7seg.h para manejar un display 7 segmentos catodo comun.



#include <dis7seg.h>  //Incluye la libreria en nuestro ejemplo

//Creamos un display nuevo y declaramos las entradas
Display d1(2,3,4,5,6,7,8,LOW); // Display <nombre>(a,b,c,d,e,f,g,HIGH/LOW); HIGH = Anodo Comun; LOW = Catodo comun

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
for(int i = 0; i<10; i++)
{
d1.print(i); //Imprime un numero en el display (d1.print(numero);  Numero es un numero entre 0 y 9
delay(500);
}
}
