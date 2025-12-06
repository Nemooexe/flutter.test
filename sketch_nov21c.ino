#define BLYNK_TEMPLATE_ID "TMPL3c1WxVyo1"
#define BLYNK_TEMPLATE_NAME "project5esp"
#define BLYNK_AUTH_TOKEN "Bh1ixWfzkO-73TD5FX098ftrEb2pzAEO"
#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>

char ssid[] = "OPPO F25 Pro 5G";
char pass[] = "unknown2";

BLYNK_WRITE(V0)   // Button Widget (ON/OFF)
{
  int value = param.asInt();
  if (value == 1) 
  {
   // digitalWrite(BUZZER, HIGH);       // buzzer ON
    Blynk.virtualWrite(V1, 1);        // web alarm widget ON
    Serial.println("Alarm ON");
    Blynk.logEvent("object", "Detected");
  } else 
  {
    //digitalWrite(BUZZER, LOW);        // buzzer OFF
    Blynk.virtualWrite(V1, 0);        // web alarm widget OFF
    Serial.println("Alarm OFF");
  }
}

void setup()
{
  Serial.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
Blynk.run();
}