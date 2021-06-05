       int LED =11;  
       int BUZZER = 12;  
       int LPG_sensor = 6;// MQ-6 SENSOR  
       int LPG_detected;  
       void setup()  
       {  
         Serial.begin(9600);  
         pinMode(LED, OUTPUT);  
         pinMode(BUZZER, OUTPUT);  
         pinMode(LPG_sensor, INPUT);  
       }  
       void loop()  
       {  
          LPG_detected = digitalRead(LPG_sensor);  
          Serial.println(LPG_detected);  
         if (LPG_detected == 1)  
         {  
           Serial.println("LPG detected...");  
           digitalWrite(LED, HIGH);  
           digitalWrite(BUZZER, HIGH);  
         }  
         else  
         {  
           Serial.println("No LPG detected.");  
           digitalWrite(LED, LOW);  
           digitalWrite(BUZZER, LOW);  
         }  
       }  
