#include <Wire.h>

int pin = 8;
int alinan=0;
void setup() {
pinMode (pin, OUTPUT);
Wire.begin(5);
Wire.onReceive(oku);

}

void oku(int sayi) {
alinan = Wire.read(); 
}

alinan değişkenine atar.*/
void loop() {
if (alinan==4) {
digitalWrite(pin, HIGH);
delay(500);
}else{
digitalWrite(pin, LOW);
delay(500);
}
}
