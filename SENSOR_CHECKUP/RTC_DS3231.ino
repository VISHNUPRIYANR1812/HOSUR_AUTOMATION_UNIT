
// WRITE RTC DATA

/*
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <RTClib.h>
DateTime now;
RTC_DS3231 rtc;
LiquidCrystal_I2C lcd(0x27, 16, 2);  // Set the I2C address of your LCD module
void displayDate(void);
void displayTime(void);
void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.init();           // Initialize the LCD
  lcd.backlight();      // Turn on the backlight
  if (!rtc.begin())
  {
    Serial.println(" RTC Module not Present");
    while (1);
  }

  if (rtc.lostPower())
  {
    Serial.println("RTC power failure, reset the time!");
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }
}
void loop()
{
  now = rtc.now();
  displayDate();
  displayTime();
}
void displayDate()
{
  lcd.setCursor(0, 0);
  lcd.print("Date:");
  lcd.print(now.day());
  lcd.print('/');
  lcd.print(now.month());
  lcd.print('/');
  lcd.print(now.year());
}

void displayTime()
{
  lcd.setCursor(0, 1);
  lcd.print("Time:");
  lcd.print(now.hour());
  lcd.print(':');
  lcd.print(now.minute());
  lcd.print(':');
  lcd.print(now.second());
  lcd.print(' ');
}

*/

//  READ RTC DATA


 /*
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <RTClib.h>

RTC_DS3231 rtc;
LiquidCrystal_I2C lcd(0x27, 16, 2); // Change the address (0x27) according to your LCD module

void setup()
{
  Serial.begin(9600);
  Wire.begin();
  lcd.begin(16, 2);
  rtc.begin();
  rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  // rtc.adjust(DateTime(2014, 1, 21, 3, 0, 0));
}

void loop()
{
  DateTime now = rtc.now();
  char t[32];
  sprintf(t, "%02d:%02d:%02d %02d/%02d/%02d", now.hour(), now.minute(), now.second(), now.day(), now.month(), now.year());

  Serial.print(F("Date/Time: "));
  Serial.println(t);

  lcd.clear(); // Clear the LCD display
  lcd.setCursor(0, 0);
  lcd.print("Date/Time: ");
  lcd.setCursor(0, 1);
  lcd.print(t);

  delay(1000);
}


*/
