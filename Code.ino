#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h> // Include the LCD I2C library
#define DHTPIN 2 // Pin where the DHT11 is connected
#define DHTTYPE DHT11 // DHT11 Sensor
 
DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C address 0x27 for 16x2 LCD

void setup() {
 Serial.begin(9600);
 dht.begin();
 lcd.begin();
 lcd.backlight(); // Turn on the LCD backlight
}

void loop() {
 delay(2000); // Wait a few seconds between measurements
 // Reading temperature or humidity takes about 250 milliseconds!
 float h = dht.readHumidity();
 float t = dht.readTemperature();
 
 // Check if any reads failed and exit early (to try again).
 if (isnan(h) || isnan(t)) {
   Serial.println("Failed to read from DHT sensor!");
   return;
 }
 
 // Print to the Serial Monitor
 Serial.print("Humidity: ");
 Serial.print(h);
 Serial.print(" %\t");
 Serial.print("Temperature: ");
 Serial.print(t);
 Serial.println(" *C");
 
 // Print to the LCD Display
 lcd.clear();
 lcd.setCursor(0, 0);
 lcd.print("Temperature: ");
 lcd.print(t);
 lcd.print(" *C");
 lcd.setCursor(0, 1);
 lcd.print("Humidity: ");
 lcd.print(h);
 lcd.print(" %");
} 