#include <LiquidCrystal.h>
  // connect normal push button (it acts as a start button)
#define motor 6
#define bz 7
int ebs=A0;
int i=0;
#include <TinyGPS.h>
TinyGPS gps;
float flat=0, flon=0;
const int rs = 8, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void read_gps()
{
    bool newData = false;
  unsigned long chars;
  unsigned short sentences, failed;
  for (unsigned long start = millis(); millis() - start < 1000;)
  {
    while (Serial.available())
    {
      char c = Serial.read();
      if (gps.encode(c)) 
        newData = true;
    }
  }

  if (newData)
  {

    unsigned long age;
    gps.f_get_position(&flat,&flon,&age);

  }
}
void setup()
{
  Serial.begin(9600);
  
  lcd.begin(16, 2);  
  lcd.print("  WELCOME");
  lcd.setCursor(0,1);
  lcd.print("INITIALIZING");
  
   Serial.println("AT");
  delay(1500);
  Serial.println("AT+CMGF=1");
  delay(500);
  pinMode(ebs,INPUT);
 
  pinMode(bz,OUTPUT);
  pinMode(motor,OUTPUT);
  digitalWrite(bz,0);
  digitalWrite(motor,1);
}
void loop()
{ 
 int ebval=digitalRead(ebs);
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print( " E:"+ String(ebval) + " T:" + String(i));
 
  delay(500);
   
    if(ebval==0)
    {
      i++;
    }
    else
   {
      i=0;
    }

    delay(100);
    if(i==4)
    {    digitalWrite(bz,1);
    delay(300);
   digitalWrite(bz,0);
    }

    if(i==7)
    {
     digitalWrite(bz,1);
     delay(300);
    digitalWrite(bz,0);
    }

   if(i>10)
    {
    digitalWrite(bz,1);
    digitalWrite(motor,0);
    lcd.clear();
    lcd.print("DRIVER SLEEPING"); 
    send_sms(1);
    digitalWrite(bz,0);
    while(1); 
}
}
void send_sms(int k)
  {
   read_gps();
    
Serial.println("Sending SMS...");
Serial.println("AT");    
delay(1000);  
Serial.println("ATE0");    
delay(1000);  
Serial.println("AT+CMGF=1");    
delay(1000);  
Serial.print("AT+CMGS=\"7995520574\"\r\n");// Replace x with mobile number
delay(1000);
if(k==1)
Serial.print("Vehicle stopped due to Driver Sleeping, at");
Serial.println("https://www.google.com/maps/search/?api=1&query=" + String(flat,6)+ "," + String(flon,6));
delay(500);
Serial.print(char(26));
delay(2000); 
  }