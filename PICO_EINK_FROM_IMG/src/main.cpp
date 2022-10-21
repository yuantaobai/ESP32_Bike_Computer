#include <Arduino.h>
#include <SPI.h>
#include "epd2in13_V3.h"
#include "imagedata.h"

Epd epd;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  epd.Init(FULL);
  Serial.println("epd FULL");
  epd.Display(IMAGE_DATA);

  /*Serial.println("epd PART");
  epd.DisplayPartBaseImage(IMAGE_DATA);
  {
    Serial.println("e-Paper PART IMAGE_DATA");
    epd.Init(PART);
    epd.DisplayPart(IMAGE_DATA);
    Serial.println("e-Paper PART Clear");
  }
  
  epd.Init(FULL);
  epd.Clear();*/
  epd.Sleep();
  Serial.println("e-Paper clear and sleep");
  

}

void loop()
{
}