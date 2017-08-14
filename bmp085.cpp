#include <Wire.h>
#include <Arduino.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP085.h>
#include "bmp085.h"

Adafruit_BMP085 bmp;

void initBmp(void) {
  bmp.begin();
}

void getBmpNextSample(float* Temperature, float* Humidity)
{
  *Temperature = bmp.readTemperature();
  *Humidity = bmp.readPressure();
}

