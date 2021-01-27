//By        : Phanindra Kumar
//Hardware  : SICK LDT pressure sensor
//Function  : To measure the pressure applied on the LDT pressure sensor and display the value on LCD

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#define BACKLIGHT_PIN     13

const int analog_Inpin = A1;
int sensor_value = 0;
int output_value = 0;
//int v=0;
//int pressure=0;

LiquidCrystal_I2C lcd(0x20);  // Set the LCD I2C address

void setup()
{
pinMode ( BACKLIGHT_PIN, OUTPUT );
digitalWrite (BACKLIGHT_PIN, HIGH );
lcd.begin(16,2);

lcd.home ();
lcd.print ("MSR-Project");
delay(200);
lcd.clear() ;
lcd.print ("Pressure =");
lcd.setCursor (0,1);
delay(200);
lcd.setCursor(12,1);
lcd.print("Mbar");
}

void loop()
{
  lcd.home ();
//  sensor_value = analogRead(analog_Inpin);
sensor_value = analogRead(analog_Inpin);
  output_value = map(sensor_value, 0, 1023, 0, 255);
  float v = ( output_value * 5.0 )/255 ;
  double pressure = (1.377)*(v*v*v*v*v)+(-2.46)*(v*v*v*v)+(-1.98)*(v*v*v)+(8.698)*(v*v)+((60.96)*(v))+ (-4.203) ;
  lcd.setCursor(1,1);
  lcd.print(pressure);
  delay(1000);
}

 // double pressure = ((-1643)*(v*v*v))+((5375)*(v*v))+((-5312)*v)+ 1581 ;
 //double pressure = ((3.482)*(v*v*v*v*v*v*v*v*v))+((-2.626)*(v*v*v*v*v*v*v*v))+((-16.25)*v*v*v*v*v*v*v)+ (9.728)*(v*v*v*v*v*v)+(24.76)*(v*v*v*v*v)+(-11.23)*(v*v*v*v)+(-12.63)*(v*v*v)+(9.025)*(v*v)+((61.8)*(v))+ (-3.806) ;
