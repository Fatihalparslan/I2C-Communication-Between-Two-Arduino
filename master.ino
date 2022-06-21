#include <Wire.h> 
/* We included the Wire.h library first.
This library allows us to establish easier I2C communication*/
int atilan=0;//variable to be sent to the slave
int hedef = 0X05;//I2C address of ATmega 3282 in slave state.
void setup()

{
Wire.begin(); //Function that makes necessary settings for I2C communication


}
void loop()

{
  
atilan++;//the uploaded value is incremented every loop. 
Wire.beginTransmission( hedef ); /*I2C communication is started for the slave address pointed by the variable named target.*/

Wire.write(atilan);//Write data to the slave address.

Wire.endTransmission(); //Terminate the I2C Communication.

delay(500);// wait half a second
if(atilan>5)
atilan=0;
}
