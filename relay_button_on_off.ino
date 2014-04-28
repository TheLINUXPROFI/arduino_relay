int Relay = 12;
int Relay2 = 11;
int pinButton = 2;
int stateRelay = LOW;
int stateButton;
int previous = LOW;
long time = 0;
long debounce = 500;

void setup() {

pinMode(pinButton, INPUT);
pinMode(Relay, OUTPUT);
pinMode(Relay2, OUTPUT);

}

void loop() {
  
stateButton = digitalRead(pinButton);
if(stateButton == HIGH && previous == LOW && millis() - time > debounce) {
if(stateRelay == HIGH){
stateRelay = LOW;
} else {
stateRelay = HIGH;
}
time = millis();
}
digitalWrite(Relay, stateRelay);
digitalWrite(Relay2, stateRelay);
previous == stateButton;
}
