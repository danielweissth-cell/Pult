#include <IRremote.h>
#include <SoftwareSerial.h>
SoftwareSerial bt(4,5); // rx(5), tx(4)
  IRsend irsend; // pin 3
void setup() {
  bt.begin(9600);
  Serial.begin(9600);
}
void loop() {
  if (bt.available() > 0) {
    int data = bt.read();
    if (data == 50){
      Serial.println("OK");
    irsend.sendNEC(0x20DF22DD, 32);
    }
    else
if (data == 43){
      Serial.println("+");
    irsend.sendNEC(0x20DF40BF, 32);
    }
    else
if (data == 45){
      Serial.println("-");
    irsend.sendNEC(0x20DFC03F, 32);
    }
    else  
if (data == 48){
      Serial.println("0");
    irsend.sendNEC(0x20DF10EF, 32);
    }
    else  
 if (data == 97){
      Serial.println("<");
    irsend.sendNEC(0x20DFE01F, 32);
    }
    else 
if (data == 100){
      Serial.println(">");
    irsend.sendNEC(0x20DF609F, 32);
    }
    else  
if (data == 119){
      Serial.println("W");
    irsend.sendNEC(0x20DF02FD, 32);
    }
    else  
if (data == 115){
      Serial.println("S");
    irsend.sendNEC(0x20DF827D, 32);
    }
    else
if (data == 49){
      Serial.println("без звука");
    irsend.sendNEC(0x20DF906F, 32);
    }
    else
    {Serial.println("такого нету");}  
  }

}