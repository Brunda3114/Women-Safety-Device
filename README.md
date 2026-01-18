\# Women Safety Device 🚨



Arduino-based compact safety device with GSM alerts and GPS tracking for real-time emergency response and driver drowsiness detection.



\## 📋 Overview



Hardware-software solution for women's safety that monitors driver alertness and sends emergency alerts with precise GPS location via SMS when drowsiness is detected.



\*\*Project Duration\*\*: Jan 2024 - May 2024  

\*\*Role\*\*: Team Captain (4-member engineering team)



\## ✨ Key Features



\- \*\*Driver Drowsiness Detection\*\*: Real-time monitoring using eye blink sensor

\- \*\*Emergency Alert System\*\*: Automatic GSM alerts with GPS coordinates

\- \*\*Location Tracking\*\*: Sends Google Maps link via SMS

\- \*\*Multi-stage Warnings\*\*: Progressive audio alerts before emergency mode

\- \*\*Automatic Safety\*\*: Stops vehicle motor when driver is sleeping

\- \*\*LCD Display\*\*: Real-time status monitoring



\## 🛠️ Hardware Components



| Component | Purpose |

|-----------|---------|

| Arduino Uno/Nano | Main controller |

| GSM Module (SIM800/900) | SMS alerts |

| GPS Module (NEO-6M) | Location tracking |

| 16x2 LCD Display | Status information |

| Buzzer | Audio warnings |

| Motor Driver | Vehicle control |

| Eye Blink Sensor | Drowsiness detection |



\## 🔌 Pin Configuration

```cpp

LCD Display:  RS(8), EN(9), D4(10), D5(11), D6(12), D7(13)

Motor:        Pin 6

Buzzer:       Pin 7

Eye Sensor:   A0 (Analog)

```



\## 💻 Software Setup



\### Prerequisites

\- Arduino IDE 1.8.x or higher

\- TinyGPS library



\### Installation Steps



1\. \*\*Install Arduino IDE\*\*  

&nbsp;  Download from: https://www.arduino.cc/en/software



2\. \*\*Install TinyGPS Library\*\*

```

&nbsp;  Sketch → Include Library → Manage Libraries

&nbsp;  Search: "TinyGPS" → Install

```



3\. \*\*Configure Emergency Contact\*\*  

&nbsp;  Edit line 108: Replace `"7995520574"` with your emergency number



4\. \*\*Upload to Arduino\*\*

&nbsp;  - Connect Arduino via USB

&nbsp;  - Select Board \& Port

&nbsp;  - Click Upload ⬆️



\## 🚀 How It Works



\### Detection Logic

```

0-3 seconds:  Normal operation ✅

4 seconds:    First warning beep 🔔

7 seconds:    Second warning beep 🔔🔔

10+ seconds:  EMERGENCY MODE 🚨

```



\### Emergency Response

1\. Motor automatically stops

2\. LCD shows: "DRIVER SLEEPING"

3\. GPS captures current location

4\. SMS sent with Google Maps link

5\. Buzzer activated



\### SMS Format

```

Vehicle stopped due to Driver Sleeping, at

https://www.google.com/maps/search/?api=1\&query=17.385044,78.486671

```



\## 📊 Project Outcomes



✅ Led 4-member team using agile practices  

✅ Seamless hardware-software integration  

✅ On-time delivery of functional prototype  

✅ 5+ successful real-world field tests  



\## 🔧 Troubleshooting



\*\*GPS not getting location?\*\*

\- Test in open area (clear sky view required)

\- Check antenna connection

\- Verify serial baud rate: 9600



\*\*SMS not sending?\*\*

\- Verify SIM card has balance/active plan

\- Check GSM module power (LED should blink)

\- Confirm phone number format



\*\*LCD display blank?\*\*

\- Adjust contrast potentiometer

\- Check 5V power supply

\- Verify pin connections



\## 🎯 Technical Skills Demonstrated



\- \*\*Hardware\*\*: Arduino, GSM, GPS, sensors

\- \*\*Programming\*\*: C/C++, embedded systems

\- \*\*Leadership\*\*: Team management, agile methodology

\- \*\*Testing\*\*: Real-world validation, debugging



\## 🔮 Future Enhancements



\- \[ ] Multiple emergency contacts

\- \[ ] Battery backup system

\- \[ ] Mobile app integration

\- \[ ] Cloud data logging

\- \[ ] Camera module for incident recording



\## ⚠️ Important Notes



\- This is an educational prototype

\- Requires active GSM SIM card with SMS plan

\- GPS needs clear sky view for accurate positioning

\- For production use, additional safety certifications required



\## 👨‍💻 Developer



\*\*Savalla Brunda\*\*  

B.Tech in Computer Science \& Engineering  

Vellore Institute of Technology



📧 savallabrunda@gmail.com  

💼 \[LinkedIn](https://linkedin.com/in/brunda-savalla-3733j1292)  

📱 +91 9515198763



\## 📄 License



Educational Project - VIT University



