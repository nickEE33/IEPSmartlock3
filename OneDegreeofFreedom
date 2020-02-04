// Smart lock functionality - For 1 Degree of Freedom. 


#include <Wire.h>
#include <LIS3MDL.h>
#include <RTC.h>

LIS3MDL mag;


// Definition of Pins - TEST RIG - LED illuminated depending on which zone the magnet is in
int UnLck=2; // Lock Unlocked
int Lck =3; // Lock Locked
int Zn2 = 33; // Zone 2
int Zn1 = 32; // Zone 1
int Zn3 = 15; // Zone 3
int Zn4 = 14; // Zone 4
int Zn5 = 4; // Zone 5



char report[80];
void setup()
{
  Serial.begin(115200);
  Wire.begin(13, 16);
   pinMode(UnLck, OUTPUT);
   pinMode(Lck, OUTPUT);
   pinMode(Zn2, OUTPUT);
   pinMode(Zn1, OUTPUT);
   pinMode(Zn3, OUTPUT);
   pinMode(Zn4, OUTPUT);
   pinMode(Zn5, OUTPUT);


  if (!mag.init())
  {
    Serial.println("Failed to detect and initialize magnetometer!");
    while (1);
  }

  mag.enableDefault();
 
}

void loop()
{ // Loop Main
  mag.read();

  snprintf(report, sizeof(report), "M: %6d %6d %6d",
           mag.m.x, mag.m.y, mag.m.z);
// Serial.println(report);
delay(500);
// ZONE ONE
if(mag.m.x>1000 && mag.m.x <3500 && mag.m.y >-2000 && mag.m.y <0 && mag.m.z >0 && mag.m.z <1500) 
{
   digitalWrite(UnLck, LOW);
   digitalWrite(Lck, LOW);
   digitalWrite(Zn2, LOW);
   digitalWrite(Zn1, HIGH);
   digitalWrite(Zn3, LOW);
   digitalWrite (Zn4, LOW);
   digitalWrite (Zn5, LOW);
   Serial.println("Zone One");
    
}
// ZONE LOCKED
else if(mag.m.x>3000 && mag.m.x <4500 && mag.m.y >50 && mag.m.y <1500 && mag.m.z >-2000 && mag.m.z <0) 
{
   digitalWrite(UnLck, LOW);
   digitalWrite(Lck, HIGH);
   digitalWrite(Zn2, LOW);
   digitalWrite(Zn1, LOW);
   digitalWrite(Zn3, LOW);
   digitalWrite (Zn4, LOW);
   digitalWrite (Zn5, LOW);
   Serial.println("Zone Locked");

}
// ZONE TWO
else if(mag.m.x>4000 && mag.m.x <6500 && mag.m.y >1500 && mag.m.y <5000 && mag.m.z >-6500 && mag.m.z <-1500) 
{
   digitalWrite(UnLck, LOW);
   digitalWrite(Lck, LOW);
   digitalWrite(Zn2, HIGH);
   digitalWrite(Zn1, LOW);
   digitalWrite(Zn3, LOW);
   digitalWrite (Zn4, LOW);
   digitalWrite (Zn5, LOW);
   Serial.println("Zone Two");

}
// ZONE UNLOCKED
else if(mag.m.x>1500 && mag.m.x <3500 && mag.m.y >6000 && mag.m.y <8000 && mag.m.z >-8000 && mag.m.z <-6000) 
{
   digitalWrite(UnLck, HIGH);
   digitalWrite(Lck, LOW);
   digitalWrite(Zn2, LOW);
   digitalWrite(Zn1, LOW);
   digitalWrite(Zn3, LOW);
   digitalWrite (Zn4, LOW);
   digitalWrite (Zn5, LOW);
   Serial.println("Zone Unlocked");

}
// ZONE THREE
else if(mag.m.x>-4500 && mag.m.x <0 && mag.m.y >500 && mag.m.y <8500 && mag.m.z >-9000 && mag.m.z <0) 
{
   digitalWrite(UnLck, LOW);
   digitalWrite(Lck, LOW);
   digitalWrite(Zn2, LOW);
   digitalWrite(Zn1, LOW);
   digitalWrite(Zn3, HIGH);
   digitalWrite (Zn4, LOW);
   digitalWrite (Zn5, LOW);
   Serial.println("Zone Three");

}
// ZONE FOUR
else if(mag.m.x>-3500 && mag.m.x <-500 && mag.m.y >-2500 && mag.m.y <500 && mag.m.z >0 && mag.m.z <2500) 
{
   digitalWrite(UnLck, LOW);
   digitalWrite(Lck, LOW);
   digitalWrite(Zn2, LOW);
   digitalWrite(Zn1, LOW);
   digitalWrite(Zn3, LOW);
   digitalWrite (Zn4, HIGH);
   digitalWrite (Zn5, LOW);
   Serial.println("Zone Four");

}
// ZONE FIVE
else if(mag.m.x>-500 && mag.m.x <1500 && mag.m.y >-2500 && mag.m.y <-1000 && mag.m.z >1000 && mag.m.z <2500) 
{
   digitalWrite(UnLck, LOW);
   digitalWrite(Lck, LOW);
   digitalWrite(Zn2, LOW);
   digitalWrite(Zn1, LOW);
   digitalWrite(Zn3, LOW);
   digitalWrite (Zn4, LOW);
   digitalWrite (Zn5, HIGH);
   Serial.println("Zone Five");

}
// ELSE - INFORMATION NOT USED. TEST LED.
else
{
   digitalWrite(UnLck, LOW);
   digitalWrite(Lck, LOW);
   digitalWrite(Zn2, LOW);
   digitalWrite(Zn1, LOW);
   digitalWrite(Zn3, LOW);
   digitalWrite (Zn4, LOW);
   digitalWrite (Zn5, LOW);
   Serial.println("Boundary - Calibration Required");
}
}
  // delay(100);
 // Loop Main
