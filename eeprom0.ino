#include <EEPROM.h>
int Direccion=0;
byte val1;
byte val2;
void setup() {
 Serial.begin(9600);
 byte informacion=B11001;
 int valor=analogRead(0);
 EEPROM.write(Direccion,informacion);
 EEPROM.write(Direccion+1,valor);
}

void loop() {
 EEPROM.read (Direccion);
 EEPROM.read (Direccion+1);
 Serial.print ("En la direccion esta:");
 Serial.print(Direccion);
 Serial.print("Se encuentra");
 Serial.print(val1,DEC);
 delay (100);
 /* codigo hecho con direccion +1 */
 Serial.print ("En la direccion esta");
 Serial.print(Direccion+1);
 Serial.print("Se encuentra");
 Serial.print(val2,DEC);
 delay (100);
 
}
