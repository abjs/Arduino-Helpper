#include <Arduino.h>
unsigned long previousMillis1 = 0;
unsigned long previousMillis2 = 0;
unsigned long previousMillis3 = 0;
int setInterval(unsigned long interval, unsigned long *previousMillis)
{
  unsigned long currentMillis = millis();
  if (currentMillis - *previousMillis >= interval)
  {
    *previousMillis = currentMillis;
    return 1;
  }
  return 0;
}

void setup()
{
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop()
{

  if (setInterval(2000, &previousMillis1))
  {
    Serial.println("                    ");
    Serial.println("         2s        ");
    Serial.println("                    ");
  }
  if (setInterval(5000, &previousMillis2))
  {
    Serial.println("                    ");
    Serial.println("         5s         ");
    Serial.println("                    ");
  }
  if (setInterval(10000, &previousMillis3))
  {
    Serial.println("                    ");
    Serial.println("         10s        ");
    Serial.println("                    ");
  }
}