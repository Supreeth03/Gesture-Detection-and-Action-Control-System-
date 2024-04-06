#include<FirebaseESP32.h>
#include<WiFi.h>

#define WIFI_SSID "Supreeth's S23 Ultra"
#define WIFI_PASSWORD "Supreeth1802"
#define FIREBASE_APIKEY "yPWej6fJ2YGqNQbD6mLB8uPJ9p0lKvnGcHvIhtlJ"
#define HOST_ID "supreethfirebase-default-rtdb.firebaseio.com"
#define LED1 4
#define LED2 18
#define LED3 25
FirebaseData FirebaseDataObj;
int receivedhello;
int receivedthanks;
int receivedyes;
void setup() {
  Serial.begin(9600);
  WiFi.begin(WIFI_SSID,WIFI_PASSWORD);
  Serial.print("Connecting To ");
  Serial.println(WIFI_SSID);
  while(WiFi.status()!= WL_CONNECTED)
  {
    Serial.print(".");
    delay(500);  
  }
  Serial.println("\n CONNECTED");
  Firebase.begin(HOST_ID,FIREBASE_APIKEY);

  Firebase.setReadTimeout(FirebaseDataObj,60000);
  
  Firebase.setwriteSizeLimit(FirebaseDataObj,"tiny");
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3, OUTPUT);
}
int i;
void loop() {
  Firebase.getInt(FirebaseDataObj, "hello-py");
  receivedhello=FirebaseDataObj.intData();
  Firebase.getInt(FirebaseDataObj, "thanks-py");
  receivedthanks=FirebaseDataObj.intData();
  Firebase.getInt(FirebaseDataObj, "yes-py");
  receivedyes=FirebaseDataObj.intData();
  if(receivedhello==1){
      digitalWrite(LED1,HIGH);
      delay(500);
      digitalWrite(LED2,HIGH);
      delay(500);
      digitalWrite(LED3,HIGH);
    }
  else if(receivedthanks==1){
        digitalWrite(LED3,HIGH);
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        delay(400);
        digitalWrite(LED1,HIGH);
        digitalWrite(LED2,HIGH);
        digitalWrite(LED3,LOW);
        delay(1500);
        digitalWrite(LED3,LOW);
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        delay(700);
        digitalWrite(LED3,HIGH);
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        delay(400);
        digitalWrite(LED1,HIGH);
        digitalWrite(LED2,HIGH);
        digitalWrite(LED3,LOW);
        delay(400);
        digitalWrite(LED3,HIGH);
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        delay(1500);
        digitalWrite(LED3,LOW);
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        delay(700);
        digitalWrite(LED3,HIGH);
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        delay(400);
        digitalWrite(LED1,HIGH);
        digitalWrite(LED2,HIGH);
        digitalWrite(LED3,LOW);
        delay(1500);
        digitalWrite(LED3,LOW);
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        delay(700);
        digitalWrite(LED3,HIGH);
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        delay(400);
        digitalWrite(LED3,LOW);
        delay(300);
        digitalWrite(LED3,HIGH);
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        delay(400);
        digitalWrite(LED3,LOW);
        delay(300);
        digitalWrite(LED3,HIGH);
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        delay(400);
        digitalWrite(LED1,HIGH);
        digitalWrite(LED2,HIGH);
        digitalWrite(LED3,LOW);
        delay(1500);
        digitalWrite(LED3,LOW);
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        delay(700);
        digitalWrite(LED3,HIGH);
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        delay(400);
        digitalWrite(LED3,LOW);
        delay(300);
        digitalWrite(LED3,HIGH);
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        delay(1500);
        digitalWrite(LED3,LOW);
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        delay(700);
        digitalWrite(LED1,HIGH);
        digitalWrite(LED2,HIGH);
        digitalWrite(LED3,LOW);
        delay(400);
        digitalWrite(LED3,HIGH);
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        delay(800);
        digitalWrite(LED3,LOW);
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        delay(700);
        digitalWrite(LED1,HIGH);
        digitalWrite(LED2,HIGH);
        digitalWrite(LED3,LOW);
        delay(400);
        digitalWrite(LED3,HIGH);
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        delay(400);
        digitalWrite(LED3,LOW);
        delay(300);
        digitalWrite(LED3,HIGH);
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        delay(1500);
        digitalWrite(LED3,LOW);
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        delay(700);
        digitalWrite(LED3,HIGH);
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        delay(400);
        digitalWrite(LED1,HIGH);
        digitalWrite(LED2,HIGH);
        digitalWrite(LED3,LOW);
        delay(1500);
  }
  else if(receivedyes==1){
        digitalWrite(LED1,LOW);
        digitalWrite(LED2,LOW);
        digitalWrite(LED3,LOW);
    }
  
  
}
