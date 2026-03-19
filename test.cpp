int strobePin = 2;
int beaconPin = 3;
int wingIcePin = 4;
int navLogoPin = 5;
int rwyTurnoffPin = 6;
int landingLPin = 7;
int landingRPin = 8;
int taxiPin = 9;
int landingRExtraPin = 10;

void setup() {
  pinMode(strobePin, INPUT);
  pinMode(beaconPin, INPUT);
  pinMode(wingIcePin, INPUT);
  pinMode(navLogoPin, INPUT);
  pinMode(rwyTurnoffPin, INPUT);
  pinMode(landingLPin, INPUT);
  pinMode(landingRPin, INPUT);
  pinMode(taxiPin, INPUT);
  pinMode(landingRExtraPin, INPUT);

  Joystick.begin();

}

void loop() {
    Joystick.setButton(0, digitalRead(strobePin));
    Joystick.setButton(1, digitalRead(beaconPin));  
    Joystick.setButton(2, digitalRead(wingIcePin));
    Joystick.setButton(3, digitalRead(navLogoPin));
    Joystick.setButton(4, digitalRead(rwyTurnoffPin));
    Joystick.setButton(5, digitalRead(landingLPin));
    Joystick.setButton(6, digitalRead(landingRPin));
    Joystick.setButton(7, digitalRead(taxiPin));
    Joystick.setButton(8, digitalRead(landingRExtraPin));

    delay (10);
}

