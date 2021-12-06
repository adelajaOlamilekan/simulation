#include<DHT.h>
#define Type DHT11
#define sensorPin 8

DHT dht(sensorPin, Type);

void setup()
{
 dht.begin();
 Serial.begin(9600); 
}

void loop()
{
  float humidity = dht.readHumidity();
  float tempC = dht.readTemperature();
  float tempF = dht.readTemperature(true);
  float cToF = dht.convertCtoF(tempC);

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("% ");

  Serial.print("TempC: ");
  Serial.print(tempC);
  Serial.print("C ");

  
  Serial.print("TempF: ");
  Serial.print(tempF);
  Serial.print("F ");

  
  Serial.print("CToF: ");
  Serial.print(cToF);
  Serial.println("F ");

 delay(1000);

  
}
