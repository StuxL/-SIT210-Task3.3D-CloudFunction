int led = D7;

void waveHandler(const char *event, const char *data); //Function prototype

void setup() {
    pinMode(led, OUTPUT);
    //Subscribe to the event published by the Deakin RIoT Photon
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", waveHandler);
}

void loop() {

}

void waveHandler(const char *event, const char *data)
{
    //Deakin's RIoT photon waves hello!
    if (strcmp(data,"wave")==0) {
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(1000);
        
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(1000);
        
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(1000);
    }
    //the pat message will cause a fast led flash
    else if (strcmp(data,"pat")==0) {
        digitalWrite(led, HIGH);
        delay(300);
        digitalWrite(led, LOW);
        delay(300);
        
        digitalWrite(led, HIGH);
        delay(300);
        digitalWrite(led, LOW);
        delay(300);
        
        digitalWrite(led, HIGH);
        delay(300);
        digitalWrite(led, LOW);
        delay(300);
    }
}
