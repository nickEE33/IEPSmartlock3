#include <Wire.h>
#include <LIS3MDL.h>

LIS3MDL mag;

char report[80];

void setup()
{
  Serial.begin(115200);
  Wire.begin(13, 16);
  
  if (!mag.init())
  {
    Serial.println("Failed to detect and initialize magnetometer!");
    while (1);
  }
  
  mag.enableDefault();
 
}

void loop()
{
  mag.read();

  snprintf(report, sizeof(report), "M: %6d %6d %6d",
           mag.m.x, mag.m.y, mag.m.z);
  Serial.println(report);
  // float re = (mag.m.x ^ 2 + mag.m.y ^ 2 + mag.m.z ^ 2) ^ 1 / 2;
  // Serial.println(re);


  delay(100);
}
