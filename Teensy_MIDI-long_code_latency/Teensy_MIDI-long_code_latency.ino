
// Detect the falling edge

// Include the Bounce2 library found here :
// https://github.com/thomasfredericks/Bounce-Arduino-Wiring
#include <Wire.h>
#include <Bounce2mcp.h>
#include <Bounce.h>
#include <Adafruit_MCP23017.h>
const int channel = 1;
// "guzik" means "button" in Polish language ;)
#define GUZIK1 8
#define GUZIK2 9
#define GUZIK3 10
#define GUZIK4 11
#define GUZIK5 12
#define GUZIK6 13
#define GUZIK7 14
#define GUZIK8 15
#define GUZIK9 0
#define GUZIK10 1
#define GUZIK11 2
#define GUZIK12 3
#define GUZIK13 4
#define GUZIK14 5
#define GUZIK15 6
#define GUZIK16 7

#define BUTTON_PIN12 13
#define BUTTON_PIN12 13


#define LED_PIN 13

int ledState = LOW;

// Instantiate a Bounce object
BounceMcp debouncer1 = BounceMcp();
BounceMcp debouncer2 = BounceMcp(); 
BounceMcp debouncer3 = BounceMcp();
BounceMcp debouncer4 = BounceMcp();
BounceMcp debouncer5 = BounceMcp();
BounceMcp debouncer6 = BounceMcp();
BounceMcp debouncer7 = BounceMcp();
BounceMcp debouncer8 = BounceMcp();
BounceMcp debouncer9 = BounceMcp();
BounceMcp debouncer10 = BounceMcp();
BounceMcp debouncer11 = BounceMcp();
BounceMcp debouncer12 = BounceMcp();
BounceMcp debouncer13 = BounceMcp();
BounceMcp debouncer14 = BounceMcp();
BounceMcp debouncer15 = BounceMcp();
BounceMcp debouncer16 = BounceMcp();

BounceMcp debouncer17 = BounceMcp();
BounceMcp debouncer18 = BounceMcp(); 
BounceMcp debouncer19 = BounceMcp();
BounceMcp debouncer20 = BounceMcp();
BounceMcp debouncer21 = BounceMcp();
BounceMcp debouncer22 = BounceMcp();
BounceMcp debouncer23 = BounceMcp();
BounceMcp debouncer24 = BounceMcp();
BounceMcp debouncer25 = BounceMcp();
BounceMcp debouncer26 = BounceMcp();
BounceMcp debouncer27 = BounceMcp();
BounceMcp debouncer28 = BounceMcp();
BounceMcp debouncer29 = BounceMcp();
BounceMcp debouncer30 = BounceMcp();
BounceMcp debouncer31 = BounceMcp();
BounceMcp debouncer32 = BounceMcp();

BounceMcp debouncer33 = BounceMcp();
BounceMcp debouncer34 = BounceMcp(); 
BounceMcp debouncer35 = BounceMcp();
BounceMcp debouncer36 = BounceMcp();
BounceMcp debouncer37 = BounceMcp();
BounceMcp debouncer38 = BounceMcp();
BounceMcp debouncer39 = BounceMcp();
BounceMcp debouncer40 = BounceMcp();
BounceMcp debouncer41 = BounceMcp();
BounceMcp debouncer42 = BounceMcp();
BounceMcp debouncer43 = BounceMcp();
BounceMcp debouncer44 = BounceMcp();
BounceMcp debouncer45 = BounceMcp();
BounceMcp debouncer46 = BounceMcp();
BounceMcp debouncer47 = BounceMcp();
BounceMcp debouncer48 = BounceMcp();

BounceMcp debouncer49 = BounceMcp();
BounceMcp debouncer50 = BounceMcp(); 
BounceMcp debouncer51 = BounceMcp();
BounceMcp debouncer52 = BounceMcp();
BounceMcp debouncer53 = BounceMcp();
BounceMcp debouncer54 = BounceMcp();
BounceMcp debouncer55 = BounceMcp();
BounceMcp debouncer56 = BounceMcp();
BounceMcp debouncer57 = BounceMcp();
BounceMcp debouncer58 = BounceMcp();
BounceMcp debouncer59 = BounceMcp();
BounceMcp debouncer60 = BounceMcp();
BounceMcp debouncer61 = BounceMcp();
BounceMcp debouncer62 = BounceMcp();
BounceMcp debouncer63 = BounceMcp();
BounceMcp debouncer64 = BounceMcp();

BounceMcp debouncer65 = BounceMcp();
BounceMcp debouncer66 = BounceMcp(); 
BounceMcp debouncer67 = BounceMcp();
BounceMcp debouncer68 = BounceMcp();
BounceMcp debouncer69 = BounceMcp();
BounceMcp debouncer70 = BounceMcp();
BounceMcp debouncer71 = BounceMcp();
BounceMcp debouncer72 = BounceMcp();
BounceMcp debouncer73 = BounceMcp();
BounceMcp debouncer74 = BounceMcp();
BounceMcp debouncer75 = BounceMcp();
BounceMcp debouncer76 = BounceMcp();
BounceMcp debouncer77 = BounceMcp();
BounceMcp debouncer78 = BounceMcp();
BounceMcp debouncer79 = BounceMcp();
BounceMcp debouncer80 = BounceMcp();

BounceMcp debouncer81 = BounceMcp();
BounceMcp debouncer82 = BounceMcp(); 
BounceMcp debouncer83 = BounceMcp();
BounceMcp debouncer84 = BounceMcp();
BounceMcp debouncer85 = BounceMcp();
BounceMcp debouncer86 = BounceMcp();
BounceMcp debouncer87 = BounceMcp();
BounceMcp debouncer88 = BounceMcp();
BounceMcp debouncer89 = BounceMcp();
BounceMcp debouncer90 = BounceMcp();
BounceMcp debouncer91 = BounceMcp();
BounceMcp debouncer92 = BounceMcp();
BounceMcp debouncer93 = BounceMcp();
BounceMcp debouncer94 = BounceMcp();
BounceMcp debouncer95 = BounceMcp();
BounceMcp debouncer96 = BounceMcp();

// Instantiate an MCP object
Adafruit_MCP23017 mcp0;
Adafruit_MCP23017 mcp1;
Adafruit_MCP23017 mcp2;
Adafruit_MCP23017 mcp3;
Adafruit_MCP23017 mcp4;
Adafruit_MCP23017 mcp5;
/*
const int controllerA0 = 0; // 10 = pan position
const int controllerA1 = 1; // 11 = volume/expression
const int controllerA2 = 2; // 91 = reverb level
const int controllerA3 = 3; // 93 = chorus level

const int controllerA6 = 4;    // 91 = reverb level
const int controllerA7 = 101;  // 93 = chorus level
const int controllerA8 = 102;  // 10 = pan position
const int controllerA9 = 103;  // 11 = volume/expression
const int controllerA10 = 104;
const int controllerA11 = 105;
const int controllerA12 = 106; // 91 = reverb level
const int controllerA13 = 107; // 93 = chorus level
const int controllerA14 = 108; // 91 = reverb level
const int controllerA15 = 109; // 93 = chorus level
const int controllerA16 = 110; // 10 = pan position
const int controllerA17 = 111; // 11 = volume/expression
const int controllerA18 = 112; // 91 = reverb level
const int controllerA19 = 113; // 93 = chorus level
const int controllerA20 = 114; // 91 = reverb level
const int controllerA21 = 115; // 93 = chorus level
const int controllerA22 = 116; // 10 = pan position
*/

void setup() {
  

  // Begin the MCP object
  mcp0.begin(1);
  mcp1.begin(3);
  mcp2.begin(7);
  mcp3.begin(6);
  mcp4.begin(4);
  mcp5.begin(0);
  
  // Setup the button with an internal pull-up :
  mcp0.pinMode(GUZIK1, INPUT);
  mcp0.pinMode(GUZIK2, INPUT);
  mcp0.pinMode(GUZIK3, INPUT);
  mcp0.pinMode(GUZIK4, INPUT);
  mcp0.pinMode(GUZIK5, INPUT);
  mcp0.pinMode(GUZIK6, INPUT);
  mcp0.pinMode(GUZIK7, INPUT);
  mcp0.pinMode(GUZIK8, INPUT);
  mcp0.pinMode(GUZIK9, INPUT);
  mcp0.pinMode(GUZIK10, INPUT);
  mcp0.pinMode(GUZIK11, INPUT);
  mcp0.pinMode(GUZIK12, INPUT);
  mcp0.pinMode(GUZIK13, INPUT);
  mcp0.pinMode(GUZIK14, INPUT);
  mcp0.pinMode(GUZIK15, INPUT);
  mcp0.pinMode(GUZIK16, INPUT);
 
  mcp1.pinMode(GUZIK1, INPUT);
  mcp1.pinMode(GUZIK2, INPUT);
  mcp1.pinMode(GUZIK3, INPUT);
  mcp1.pinMode(GUZIK4, INPUT);
  mcp1.pinMode(GUZIK5, INPUT);
  mcp1.pinMode(GUZIK6, INPUT);
  mcp1.pinMode(GUZIK7, INPUT);
  mcp1.pinMode(GUZIK8, INPUT);
  mcp1.pinMode(GUZIK9, INPUT);
  mcp1.pinMode(GUZIK10, INPUT);
  mcp1.pinMode(GUZIK11, INPUT);
  mcp1.pinMode(GUZIK12, INPUT);
  mcp1.pinMode(GUZIK13, INPUT);
  mcp1.pinMode(GUZIK14, INPUT);
  mcp1.pinMode(GUZIK15, INPUT);
  mcp1.pinMode(GUZIK16, INPUT);

  mcp2.pinMode(GUZIK1, INPUT);
  mcp2.pinMode(GUZIK2, INPUT);
  mcp2.pinMode(GUZIK3, INPUT);
  mcp2.pinMode(GUZIK4, INPUT);
  mcp2.pinMode(GUZIK5, INPUT);
  mcp2.pinMode(GUZIK6, INPUT);
  mcp2.pinMode(GUZIK7, INPUT);
  mcp2.pinMode(GUZIK8, INPUT);
  mcp2.pinMode(GUZIK9, INPUT);
  mcp2.pinMode(GUZIK10, INPUT);
  mcp2.pinMode(GUZIK11, INPUT);
  mcp2.pinMode(GUZIK12, INPUT);
  mcp2.pinMode(GUZIK13, INPUT);
  mcp2.pinMode(GUZIK14, INPUT);
  mcp2.pinMode(GUZIK15, INPUT);
  mcp2.pinMode(GUZIK16, INPUT);

  mcp3.pinMode(GUZIK1, INPUT);
  mcp3.pinMode(GUZIK2, INPUT);
  mcp3.pinMode(GUZIK3, INPUT);
  mcp3.pinMode(GUZIK4, INPUT);
  mcp3.pinMode(GUZIK5, INPUT);
  mcp3.pinMode(GUZIK6, INPUT);
  mcp3.pinMode(GUZIK7, INPUT);
  mcp3.pinMode(GUZIK8, INPUT);
  mcp3.pinMode(GUZIK9, INPUT);
  mcp3.pinMode(GUZIK10, INPUT);
  mcp3.pinMode(GUZIK11, INPUT);
  mcp3.pinMode(GUZIK12, INPUT);
  mcp3.pinMode(GUZIK13, INPUT);
  mcp3.pinMode(GUZIK14, INPUT);
  mcp3.pinMode(GUZIK15, INPUT);
  mcp3.pinMode(GUZIK16, INPUT);

  mcp4.pinMode(GUZIK1, INPUT);
  mcp4.pinMode(GUZIK2, INPUT);
  mcp4.pinMode(GUZIK3, INPUT);
  mcp4.pinMode(GUZIK4, INPUT);
  mcp4.pinMode(GUZIK5, INPUT);
  mcp4.pinMode(GUZIK6, INPUT);
  mcp4.pinMode(GUZIK7, INPUT);
  mcp4.pinMode(GUZIK8, INPUT);
  mcp4.pinMode(GUZIK9, INPUT);
  mcp4.pinMode(GUZIK10, INPUT);
  mcp4.pinMode(GUZIK11, INPUT);
  mcp4.pinMode(GUZIK12, INPUT);
  mcp4.pinMode(GUZIK13, INPUT);
  mcp4.pinMode(GUZIK14, INPUT);
  mcp4.pinMode(GUZIK15, INPUT);
  mcp4.pinMode(GUZIK16, INPUT);
  
  mcp5.pinMode(GUZIK1, INPUT);
  mcp5.pinMode(GUZIK2, INPUT);
  mcp5.pinMode(GUZIK3, INPUT);
  mcp5.pinMode(GUZIK4, INPUT);
  mcp5.pinMode(GUZIK5, INPUT);
  mcp5.pinMode(GUZIK6, INPUT);
  mcp5.pinMode(GUZIK7, INPUT);
  mcp5.pinMode(GUZIK8, INPUT);
  mcp5.pinMode(GUZIK9, INPUT);
  mcp5.pinMode(GUZIK10, INPUT);
  mcp5.pinMode(GUZIK11, INPUT);
  mcp5.pinMode(GUZIK12, INPUT);
  mcp5.pinMode(GUZIK13, INPUT);
  mcp5.pinMode(GUZIK14, INPUT);
  mcp5.pinMode(GUZIK15, INPUT);
  mcp5.pinMode(GUZIK16, INPUT);
  
  // After setting up the button, setup the Bounce instance :
debouncer1.attach(mcp0, GUZIK1, 5);
debouncer2.attach(mcp0, GUZIK2, 5);
debouncer3.attach(mcp0, GUZIK3, 5);
debouncer4.attach(mcp0, GUZIK4, 5);
debouncer5.attach(mcp0, GUZIK5, 5);
debouncer6.attach(mcp0, GUZIK6, 5);
debouncer7.attach(mcp0, GUZIK7, 5);
debouncer8.attach(mcp0, GUZIK8, 5);
debouncer9.attach(mcp0, GUZIK9, 5);
debouncer10.attach(mcp0, GUZIK10, 5);
debouncer11.attach(mcp0, GUZIK11, 5);
debouncer12.attach(mcp0, GUZIK12, 5);
debouncer13.attach(mcp0, GUZIK13, 5);
debouncer14.attach(mcp0, GUZIK14, 5);
debouncer15.attach(mcp0, GUZIK15, 5);
debouncer16.attach(mcp0, GUZIK16, 5);

debouncer17.attach(mcp1, GUZIK1, 5);
debouncer18.attach(mcp1, GUZIK2, 5);
debouncer19.attach(mcp1, GUZIK3, 5);
debouncer20.attach(mcp1, GUZIK4, 5);
debouncer21.attach(mcp1, GUZIK5, 5);
debouncer22.attach(mcp1, GUZIK6, 5);
debouncer23.attach(mcp1, GUZIK7, 5);
debouncer24.attach(mcp1, GUZIK8, 5);
debouncer25.attach(mcp1, GUZIK9, 5);
debouncer26.attach(mcp1, GUZIK10, 5);
debouncer27.attach(mcp1, GUZIK11, 5);
debouncer28.attach(mcp1, GUZIK12, 5);
debouncer29.attach(mcp1, GUZIK13, 5);
debouncer30.attach(mcp1, GUZIK14, 5);
debouncer31.attach(mcp1, GUZIK15, 5);
debouncer32.attach(mcp1, GUZIK16, 5);

debouncer33.attach(mcp2, GUZIK1, 5);
debouncer34.attach(mcp2, GUZIK2, 5);
debouncer35.attach(mcp2, GUZIK3, 5);
debouncer36.attach(mcp2, GUZIK4, 5);
debouncer37.attach(mcp2, GUZIK5, 5);
debouncer38.attach(mcp2, GUZIK6, 5);
debouncer39.attach(mcp2, GUZIK7, 5);
debouncer40.attach(mcp2, GUZIK8, 5);
debouncer41.attach(mcp2, GUZIK9, 5);
debouncer42.attach(mcp2, GUZIK10, 5);
debouncer43.attach(mcp2, GUZIK11, 5);
debouncer44.attach(mcp2, GUZIK12, 5);
debouncer45.attach(mcp2, GUZIK13, 5);
debouncer46.attach(mcp2, GUZIK14, 5);
debouncer47.attach(mcp2, GUZIK15, 5);
debouncer48.attach(mcp2, GUZIK16, 5);

debouncer49.attach(mcp3, GUZIK1, 5);
debouncer50.attach(mcp3, GUZIK2, 5);
debouncer51.attach(mcp3, GUZIK3, 5);
debouncer52.attach(mcp3, GUZIK4, 5);
debouncer53.attach(mcp3, GUZIK5, 5);
debouncer54.attach(mcp3, GUZIK6, 5);
debouncer55.attach(mcp3, GUZIK7, 5);
debouncer56.attach(mcp3, GUZIK8, 5);
debouncer57.attach(mcp3, GUZIK9, 5);
debouncer58.attach(mcp3, GUZIK10, 5);
debouncer59.attach(mcp3, GUZIK11, 5);
debouncer60.attach(mcp3, GUZIK12, 5);
debouncer61.attach(mcp3, GUZIK13, 5);
debouncer62.attach(mcp3, GUZIK14, 5);
debouncer63.attach(mcp3, GUZIK15, 5);
debouncer64.attach(mcp3, GUZIK16, 5);

debouncer65.attach(mcp4, GUZIK1, 5);
debouncer66.attach(mcp4, GUZIK2, 5);
debouncer67.attach(mcp4, GUZIK3, 5);
debouncer68.attach(mcp4, GUZIK4, 5);
debouncer69.attach(mcp4, GUZIK5, 5);
debouncer70.attach(mcp4, GUZIK6, 5);
debouncer71.attach(mcp4, GUZIK7, 5);
debouncer72.attach(mcp4, GUZIK8, 5);
debouncer73.attach(mcp4, GUZIK9, 5);
debouncer74.attach(mcp4, GUZIK10, 5);
debouncer75.attach(mcp4, GUZIK11, 5);
debouncer76.attach(mcp4, GUZIK12, 5);
debouncer77.attach(mcp4, GUZIK13, 5);
debouncer78.attach(mcp4, GUZIK14, 5);
debouncer79.attach(mcp4, GUZIK15, 5);
debouncer80.attach(mcp4, GUZIK16, 5);

debouncer81.attach(mcp5, GUZIK1, 5);
debouncer82.attach(mcp5, GUZIK2, 5);
debouncer83.attach(mcp5, GUZIK3, 5);
debouncer84.attach(mcp5, GUZIK4, 5);
debouncer85.attach(mcp5, GUZIK5, 5);
debouncer86.attach(mcp5, GUZIK6, 5);
debouncer87.attach(mcp5, GUZIK7, 5);
debouncer88.attach(mcp5, GUZIK8, 5);
debouncer89.attach(mcp5, GUZIK9, 5);
debouncer90.attach(mcp5, GUZIK10, 5);
debouncer91.attach(mcp5, GUZIK11, 5);
debouncer92.attach(mcp5, GUZIK12, 5);
debouncer93.attach(mcp5, GUZIK13, 5);
debouncer94.attach(mcp5, GUZIK14, 5);
debouncer95.attach(mcp5, GUZIK15, 5);
debouncer96.attach(mcp5, GUZIK16, 5);
    
  // Setup the LED :
  pinMode(LED_PIN,OUTPUT);
  digitalWrite(LED_PIN,ledState);
 
  
}
/*
int previousA0 = -1;
int previousA1 = -1;
int previousA2 = -1;
int previousA3 = -1;

int previousA6 = -1;
int previousA7 = -1;
int previousA8 = -1;
int previousA9 = -1;
int previousA10 = -1;
int previousA11 = -1;
int previousA12 = -1;
int previousA13 = -1;
int previousA14 = -1;
int previousA15 = -1;
int previousA16 = -1;
int previousA17 = -1;
int previousA18 = -1;
int previousA19 = -1;
int previousA20 = -1;
int previousA21 = -1;
int previousA22 = -1;

elapsedMillis msec = 0;
*/
void loop() {
/*
if (msec >= 20) {
    msec = 0;
    int n0 = analogRead(A0) / 8;
    int n1 = analogRead(A1) / 8;
    int n2 = analogRead(A2) / 8;
    int n3 = analogRead(A3) / 8;

    int n6 = analogRead(A6) / 8;
    int n7 = analogRead(A7) / 8;
    int n8 = analogRead(A8) / 8;
    int n9 = analogRead(A9) / 8;
    int n10 = analogRead(A10) / 8;
    int n11 = analogRead(A11) / 8;
    int n12 = analogRead(A12) / 8;
    int n13 = analogRead(A13) / 8;
    int n14 = analogRead(A14) / 8;
    int n15 = analogRead(A15) / 8;
    int n16 = analogRead(A16) / 8;
    int n17 = analogRead(A17) / 8;
    int n18 = analogRead(A18) / 8;
    int n19 = analogRead(A19) / 8;
    int n20 = analogRead(A20) / 8;
    int n21 = analogRead(A21) / 8;
    int n22 = analogRead(A22) / 8;

    // only transmit MIDI messages if analog input changed
    if (n0 != previousA0) {
      usbMIDI.sendControlChange(controllerA0, n0, channel);
      previousA0 = n0;
    }
    if (n1 != previousA1) {
      usbMIDI.sendControlChange(controllerA1, n1, channel);
      previousA1 = n1;
    }
    if (n2 != previousA2) {
      usbMIDI.sendControlChange(controllerA2, n2, channel);
      previousA2 = n2;
    }
    if (n3 != previousA3) {
      usbMIDI.sendControlChange(controllerA3, n3, channel);
      previousA3 = n3;
    }

    if (n6 != previousA6) {
      usbMIDI.sendControlChange(controllerA6, n6, channel);
      previousA6 = n6;
    }
    if (n7 != previousA7) {
      usbMIDI.sendControlChange(controllerA7, n7, channel);
      previousA7 = n7;
    }
    if (n8 != previousA8) {
      usbMIDI.sendControlChange(controllerA8, n8, channel);
      previousA8 = n8;
    }
    if (n9 != previousA9) {
      usbMIDI.sendControlChange(controllerA9, n9, channel);
      previousA9 = n9;
    }
    if (n10 != previousA10) {
      usbMIDI.sendControlChange(controllerA10, n10, channel);
      previousA10 = n10;
    }
    if (n11 != previousA11) {
      usbMIDI.sendControlChange(controllerA11, n11, channel);
      previousA11 = n11;
    }
    if (n12 != previousA12) {
      usbMIDI.sendControlChange(controllerA12, n12, channel);
      previousA12 = n12;
    }
    if (n13 != previousA13) {
      usbMIDI.sendControlChange(controllerA13, n13, channel);
      previousA13 = n13;
    }
    if (n14 != previousA14) {
      usbMIDI.sendControlChange(controllerA14, n14, channel);
      previousA14 = n14;
    }
    if (n15 != previousA15) {
      usbMIDI.sendControlChange(controllerA15, n15, channel);
      previousA15 = n15;
    }
    if (n16 != previousA16) {
      usbMIDI.sendControlChange(controllerA16, n16, channel);
      previousA16 = n16;
    }
    if (n17 != previousA17) {
      usbMIDI.sendControlChange(controllerA17, n17, channel);
      previousA17 = n17;
    }
    if (n18 != previousA18) {
      usbMIDI.sendControlChange(controllerA18, n18, channel);
      previousA18 = n18;
    }
    if (n19 != previousA19) {
      usbMIDI.sendControlChange(controllerA19, n19, channel);
      previousA19 = n19;
    }
    if (n20 != previousA20) {
      usbMIDI.sendControlChange(controllerA20, n20, channel);
      previousA20 = n20;
    }
    if (n21 != previousA21) {
      usbMIDI.sendControlChange(controllerA21, n21, channel);
      previousA21 = n21;
    }
    if (n22 != previousA22) {
      usbMIDI.sendControlChange(controllerA22, n22, channel);
      previousA22 = n22;
    } 
  }
*/
  // Update the Bounce instance :
   debouncer1.update();
   debouncer2.update();
   debouncer3.update();
   debouncer4.update();
   debouncer5.update();
   debouncer6.update();
   debouncer7.update();
   debouncer8.update();
   debouncer9.update();
   debouncer10.update();
   debouncer11.update();
   debouncer12.update();
   debouncer13.update();
   debouncer14.update();
   debouncer15.update();
   debouncer16.update();

   debouncer17.update();
   debouncer18.update();
   debouncer19.update();
   debouncer20.update();
   debouncer21.update();
   debouncer22.update();
   debouncer23.update();
   debouncer24.update();
   debouncer25.update();
   debouncer26.update();
   debouncer27.update();
   debouncer28.update();
   debouncer29.update();
   debouncer30.update();
   debouncer31.update();
   debouncer32.update();

   debouncer33.update();
   debouncer34.update();
   debouncer35.update();
   debouncer36.update();
   debouncer37.update();
   debouncer38.update();
   debouncer39.update();
   debouncer40.update();
   debouncer41.update();
   debouncer42.update();
   debouncer43.update();
   debouncer44.update();
   debouncer45.update();
   debouncer46.update();
   debouncer47.update();
   debouncer48.update();

   debouncer49.update();
   debouncer50.update();
   debouncer51.update();
   debouncer52.update();
   debouncer53.update();
   debouncer54.update();
   debouncer55.update();
   debouncer56.update();
   debouncer57.update();
   debouncer58.update();
   debouncer59.update();
   debouncer60.update();
   debouncer61.update();
   debouncer62.update();
   debouncer63.update();
   debouncer64.update();
   
   debouncer65.update();
   debouncer66.update();
   debouncer67.update();
   debouncer68.update();
   debouncer69.update();
   debouncer70.update();
   debouncer71.update();
   debouncer72.update();
   debouncer73.update();
   debouncer74.update();
   debouncer75.update();
   debouncer76.update();
   debouncer77.update();
   debouncer78.update();
   debouncer79.update();
   debouncer80.update();
   
   debouncer81.update();
   debouncer82.update();
   debouncer83.update();
   debouncer84.update();
   debouncer85.update();
   debouncer86.update();
   debouncer87.update();
   debouncer88.update();
   debouncer89.update();
   debouncer90.update();
   debouncer91.update();
   debouncer92.update();
   debouncer93.update();
   debouncer94.update();
   debouncer95.update();
   debouncer96.update();
   // Call code if Bounce fell (transition from HIGH to LOW) :
  
   //board1 ON
   if ( debouncer1.fell() ) {
     ledState = !ledState;
     digitalWrite(LED_PIN,ledState);  //dioda
   }
   if ( debouncer1.fell() ) {
     usbMIDI.sendNoteOn(5, 99, channel);
   }
   if ( debouncer2.fell() ) {
     usbMIDI.sendNoteOn(6, 99, channel);
   }
   if ( debouncer3.fell() ) {
     usbMIDI.sendNoteOn(7, 99, channel);
   }
   if ( debouncer4.fell() ) {
     usbMIDI.sendNoteOn(8, 99, channel);
   }
   if ( debouncer5.fell() ) {
     usbMIDI.sendNoteOn(9, 99, channel);
   }
   if ( debouncer6.fell() ) {
     usbMIDI.sendNoteOn(10, 99, channel);
   }
   if ( debouncer7.fell() ) {
     usbMIDI.sendNoteOn(11, 99, channel);
   }
   if ( debouncer8.fell() ) {
     usbMIDI.sendNoteOn(12, 99, channel);
   }
   if ( debouncer9.fell() ) {
     usbMIDI.sendNoteOn(13, 99, channel);
   }
   if ( debouncer10.fell() ) {
     usbMIDI.sendNoteOn(14, 99, channel);
   }
   if ( debouncer11.fell() ) {
     usbMIDI.sendNoteOn(15, 99, channel);
   }
   if ( debouncer12.fell() ) {
     usbMIDI.sendNoteOn(16, 99, channel);
   }
   if ( debouncer13.fell() ) {
     usbMIDI.sendNoteOn(17, 99, channel);
   }
   if ( debouncer14.fell() ) {
     usbMIDI.sendNoteOn(18, 99, channel);
   }
   if ( debouncer15.fell() ) {
     usbMIDI.sendNoteOn(19, 99, channel);
   }
   if ( debouncer16.fell() ) {
     usbMIDI.sendNoteOn(20, 99, channel);
   }

//board2 ON
   if ( debouncer17.fell() ) {
     ledState = !ledState;
     digitalWrite(LED_PIN,ledState);  //dioda
   }
   if ( debouncer17.fell() ) {
     usbMIDI.sendNoteOn(21, 99, channel);
   }
   if ( debouncer18.fell() ) {
     usbMIDI.sendNoteOn(22, 99, channel);
   }
   if ( debouncer19.fell() ) {
     usbMIDI.sendNoteOn(23, 99, channel);
   }
   if ( debouncer20.fell() ) {
     usbMIDI.sendNoteOn(24, 99, channel);
   }
   if ( debouncer21.fell() ) {
     usbMIDI.sendNoteOn(25, 99, channel);
   }
   if ( debouncer22.fell() ) {
     usbMIDI.sendNoteOn(26, 99, channel);
   }
   if ( debouncer23.fell() ) {
     usbMIDI.sendNoteOn(27, 99, channel);
   }
   if ( debouncer24.fell() ) {
     usbMIDI.sendNoteOn(28, 99, channel);
   }
   if ( debouncer25.fell() ) {
     usbMIDI.sendNoteOn(36, 99, channel);
   }
   if ( debouncer26.fell() ) {
     usbMIDI.sendNoteOn(35, 99, channel);
   }
   if ( debouncer27.fell() ) {
     usbMIDI.sendNoteOn(34, 99, channel);
   }
   if ( debouncer28.fell() ) {
     usbMIDI.sendNoteOn(33, 99, channel);
   }
   if ( debouncer29.fell() ) {
     usbMIDI.sendNoteOn(32, 99, channel);
   }
   if ( debouncer30.fell() ) {
     usbMIDI.sendNoteOn(31, 99, channel);
   }
   if ( debouncer31.fell() ) {
     usbMIDI.sendNoteOn(30, 99, channel);
   }
   if ( debouncer32.fell() ) {
     usbMIDI.sendNoteOn(29, 99, channel);
   }
   
   //board3 ON
   if ( debouncer33.fell() ) {
     ledState = !ledState;
     digitalWrite(LED_PIN,ledState);  //dioda
   }
   if ( debouncer33.fell() ) {
     usbMIDI.sendNoteOn(37, 99, channel);
   }
   if ( debouncer34.fell() ) {
     usbMIDI.sendNoteOn(38, 99, channel);
   }
   if ( debouncer35.fell() ) {
     usbMIDI.sendNoteOn(39, 99, channel);
   }
   if ( debouncer36.fell() ) {
     usbMIDI.sendNoteOn(40, 99, channel);
   }
   if ( debouncer37.fell() ) {
     usbMIDI.sendNoteOn(41, 99, channel);
   }
   if ( debouncer38.fell() ) {
     usbMIDI.sendNoteOn(42, 99, channel);
   }
   if ( debouncer39.fell() ) {
     usbMIDI.sendNoteOn(43, 99, channel);
   }
   if ( debouncer40.fell() ) {
     usbMIDI.sendNoteOn(44, 99, channel);
   }
   if ( debouncer41.fell() ) {
     usbMIDI.sendNoteOn(45, 99, channel);
   }
   if ( debouncer42.fell() ) {
     usbMIDI.sendNoteOn(46, 99, channel);
   }
   if ( debouncer43.fell() ) {
     usbMIDI.sendNoteOn(47, 99, channel);
   }
   if ( debouncer44.fell() ) {
     usbMIDI.sendNoteOn(48, 99, channel);
   }
   if ( debouncer45.fell() ) {
     usbMIDI.sendNoteOn(49, 99, channel);
   }
   if ( debouncer46.fell() ) {
     usbMIDI.sendNoteOn(50, 99, channel);
   }
   if ( debouncer47.fell() ) {
     usbMIDI.sendNoteOn(51, 99, channel);
   }
   if ( debouncer48.fell() ) {
     usbMIDI.sendNoteOn(52, 99, channel);
   }

   //board4 ON
   if ( debouncer49.fell() ) {
     ledState = !ledState;
     digitalWrite(LED_PIN,ledState);  //dioda
   }
   if ( debouncer49.fell() ) {
     usbMIDI.sendNoteOn(53, 99, channel);
   }
   if ( debouncer50.fell() ) {
     usbMIDI.sendNoteOn(54, 99, channel);
   }
   if ( debouncer51.fell() ) {
     usbMIDI.sendNoteOn(55, 99, channel);
   }
   if ( debouncer52.fell() ) {
     usbMIDI.sendNoteOn(56, 99, channel);
   }
   if ( debouncer53.fell() ) {
     usbMIDI.sendNoteOn(57, 99, channel);
   }
   if ( debouncer54.fell() ) {
     usbMIDI.sendNoteOn(58, 99, channel);
   }
   if ( debouncer55.fell() ) {
     usbMIDI.sendNoteOn(59, 99, channel);
   }
   if ( debouncer56.fell() ) {
     usbMIDI.sendNoteOn(60, 99, channel);
   }
   if ( debouncer57.fell() ) {
     usbMIDI.sendNoteOn(61, 99, channel);
   }
   if ( debouncer58.fell() ) {
     usbMIDI.sendNoteOn(62, 99, channel);
   }
   if ( debouncer59.fell() ) {
     usbMIDI.sendNoteOn(63, 99, channel);
   }
   if ( debouncer60.fell() ) {
     usbMIDI.sendNoteOn(64, 99, channel);
   }
   if ( debouncer61.fell() ) {
     usbMIDI.sendNoteOn(65, 99, channel);
   }
   if ( debouncer62.fell() ) {
     usbMIDI.sendNoteOn(66, 99, channel);
   }
   if ( debouncer63.fell() ) {
     usbMIDI.sendNoteOn(67, 99, channel);
   }
   if ( debouncer64.fell() ) {
     usbMIDI.sendNoteOn(68, 99, channel);
   }

//board5 ON
   if ( debouncer65.fell() ) {
     ledState = !ledState;
     digitalWrite(LED_PIN,ledState);  //dioda
   }
   if ( debouncer65.fell() ) {
     usbMIDI.sendNoteOn(69, 99, channel);
   }
   if ( debouncer66.fell() ) {
     usbMIDI.sendNoteOn(70, 99, channel);
   }
   if ( debouncer67.fell() ) {
     usbMIDI.sendNoteOn(71, 99, channel);
   }
   if ( debouncer68.fell() ) {
     usbMIDI.sendNoteOn(72, 99, channel);
   }
   if ( debouncer69.fell() ) {
     usbMIDI.sendNoteOn(73, 99, channel);
   }
   if ( debouncer70.fell() ) {
     usbMIDI.sendNoteOn(74, 99, channel);
   }
   if ( debouncer71.fell() ) {
     usbMIDI.sendNoteOn(75, 99, channel);
   }
   if ( debouncer72.fell() ) {
     usbMIDI.sendNoteOn(76, 99, channel);
   }
   if ( debouncer73.fell() ) {
     usbMIDI.sendNoteOn(77, 99, channel);
   }
   if ( debouncer74.fell() ) {
     usbMIDI.sendNoteOn(78, 99, channel);
   }
   if ( debouncer75.fell() ) {
     usbMIDI.sendNoteOn(79, 99, channel);
   }
   if ( debouncer76.fell() ) {
     usbMIDI.sendNoteOn(80, 99, channel);
   }
   if ( debouncer77.fell() ) {
     usbMIDI.sendNoteOn(81, 99, channel);
   }
   if ( debouncer78.fell() ) {
     usbMIDI.sendNoteOn(82, 99, channel);
   }
   if ( debouncer79.fell() ) {
     usbMIDI.sendNoteOn(83, 99, channel);
   }
   if ( debouncer80.fell() ) {
     usbMIDI.sendNoteOn(84, 99, channel);
   }

   //board6 ON
   if ( debouncer81.fell() ) {
     ledState = !ledState;
     digitalWrite(LED_PIN,ledState);  //dioda
   }
   if ( debouncer81.fell() ) {
     usbMIDI.sendNoteOn(85, 99, channel);
   }
   if ( debouncer82.fell() ) {
     usbMIDI.sendNoteOn(86, 99, channel);
   }
   if ( debouncer83.fell() ) {
     usbMIDI.sendNoteOn(87, 99, channel);
   }
   if ( debouncer84.fell() ) {
     usbMIDI.sendNoteOn(88, 99, channel);
   }
   if ( debouncer85.fell() ) {
     usbMIDI.sendNoteOn(89, 99, channel);
   }
   if ( debouncer86.fell() ) {
     usbMIDI.sendNoteOn(90, 99, channel);
   }
   if ( debouncer87.fell() ) {
     usbMIDI.sendNoteOn(91, 99, channel);
   }
   if ( debouncer88.fell() ) {
     usbMIDI.sendNoteOn(92, 99, channel);
   }
   if ( debouncer89.fell() ) {
     usbMIDI.sendNoteOn(93, 99, channel);
   }
   if ( debouncer90.fell() ) {
     usbMIDI.sendNoteOn(94, 99, channel);
   }
   if ( debouncer91.fell() ) {
     usbMIDI.sendNoteOn(95, 99, channel);
   }
   if ( debouncer92.fell() ) {
     usbMIDI.sendNoteOn(96, 99, channel);
   }
   if ( debouncer93.fell() ) {
     usbMIDI.sendNoteOn(97, 99, channel);
   }
   if ( debouncer94.fell() ) {
     usbMIDI.sendNoteOn(98, 99, channel);
   }
   if ( debouncer95.fell() ) {
     usbMIDI.sendNoteOn(99, 99, channel);
   }
   if ( debouncer96.fell() ) {
     usbMIDI.sendNoteOn(100, 99, channel);
   }
   

   
//board1 OFF
   if ( debouncer1.rose() ) { 
     ledState = !ledState;
     digitalWrite(LED_PIN,ledState);  //dioda off
   }
   if ( debouncer1.rose() ) {
     usbMIDI.sendNoteOn(5, 00, channel);
   }
   if ( debouncer2.rose() ) {
     usbMIDI.sendNoteOn(6, 00, channel);
   }
   if ( debouncer3.rose() ) {
     usbMIDI.sendNoteOn(7, 00, channel);
   }
   if ( debouncer4.rose() ) {
     usbMIDI.sendNoteOn(8, 00, channel);
   }
   if ( debouncer5.rose() ) {
     usbMIDI.sendNoteOn(9, 00, channel);
   }
   if ( debouncer6.rose() ) {
     usbMIDI.sendNoteOn(10, 00, channel);
   }
   if ( debouncer7.rose() ) {
     usbMIDI.sendNoteOn(11, 00, channel);
   }
   if ( debouncer8.rose() ) {
     usbMIDI.sendNoteOn(12, 00, channel);
   }
   if ( debouncer9.rose() ) {
     usbMIDI.sendNoteOn(13, 00, channel);
   }
   if ( debouncer10.rose() ) {
     usbMIDI.sendNoteOn(14, 00, channel);
   }
   if ( debouncer11.rose() ) {
     usbMIDI.sendNoteOn(15, 00, channel);
   }
   if ( debouncer12.rose() ) {
     usbMIDI.sendNoteOn(16, 00, channel);
   }
   if ( debouncer13.rose() ) {
     usbMIDI.sendNoteOn(17, 00, channel);
   }
   if ( debouncer14.rose() ) {
     usbMIDI.sendNoteOn(18, 00, channel);
   }
   if ( debouncer15.rose() ) {
     usbMIDI.sendNoteOn(19, 00, channel);
   }
   if ( debouncer16.rose() ) {
     usbMIDI.sendNoteOn(20, 00, channel);
   }

   
//board2 OFF
 if ( debouncer17.rose() ) { 
     ledState = !ledState;
     digitalWrite(LED_PIN,ledState);  //dioda off
   }
   if ( debouncer17.rose() ) {
     usbMIDI.sendNoteOn(21, 00, channel);
   }
   if ( debouncer18.rose() ) {
     usbMIDI.sendNoteOn(22, 00, channel);
   }
   if ( debouncer19.rose() ) {
     usbMIDI.sendNoteOn(23, 00, channel);
   }
   if ( debouncer20.rose() ) {
     usbMIDI.sendNoteOn(24, 00, channel);
   }
   if ( debouncer21.rose() ) {
     usbMIDI.sendNoteOn(25, 00, channel);
   }
   if ( debouncer22.rose() ) {
     usbMIDI.sendNoteOn(26, 00, channel);
   }
   if ( debouncer23.rose() ) {
     usbMIDI.sendNoteOn(27, 00, channel);
   }
   if ( debouncer24.rose() ) {
     usbMIDI.sendNoteOn(28, 00, channel);
   }
   if ( debouncer25.rose() ) {
     usbMIDI.sendNoteOn(36, 00, channel);
   }
   if ( debouncer26.rose() ) {
     usbMIDI.sendNoteOn(35, 00, channel);
   }
   if ( debouncer27.rose() ) {
     usbMIDI.sendNoteOn(34, 00, channel);
   }
   if ( debouncer28.rose() ) {
     usbMIDI.sendNoteOn(33, 00, channel);
   }
   if ( debouncer29.rose() ) {
     usbMIDI.sendNoteOn(32, 00, channel);
   }
   if ( debouncer30.rose() ) {
     usbMIDI.sendNoteOn(31, 00, channel);
   }
   if ( debouncer31.rose() ) {
     usbMIDI.sendNoteOn(30, 00, channel);
   }
   if ( debouncer32.rose() ) {
     usbMIDI.sendNoteOn(29, 00, channel);
   }
 

   //board3 OFF
   if ( debouncer33.rose() ) {
     ledState = !ledState;
     digitalWrite(LED_PIN,ledState);  //dioda
   }
   if ( debouncer33.rose() ) {
     usbMIDI.sendNoteOn(37, 00, channel);
   }
   if ( debouncer34.rose() ) {
     usbMIDI.sendNoteOn(38, 00, channel);
   }
   if ( debouncer35.rose() ) {
     usbMIDI.sendNoteOn(39, 00, channel);
   }
   if ( debouncer36.rose() ) {
     usbMIDI.sendNoteOn(40, 00, channel);
   }
   if ( debouncer37.rose() ) {
     usbMIDI.sendNoteOn(41, 00, channel);
   }
   if ( debouncer38.rose() ) {
     usbMIDI.sendNoteOn(42, 00, channel);
   }
   if ( debouncer39.rose() ) {
     usbMIDI.sendNoteOn(43, 00, channel);
   }
   if ( debouncer40.rose() ) {
     usbMIDI.sendNoteOn(44, 00, channel);
   }
   if ( debouncer41.rose() ) {
     usbMIDI.sendNoteOn(45, 00, channel);
   }
   if ( debouncer42.rose() ) {
     usbMIDI.sendNoteOn(46, 00, channel);
   }
   if ( debouncer43.rose() ) {
     usbMIDI.sendNoteOn(47, 00, channel);
   }
   if ( debouncer44.rose() ) {
     usbMIDI.sendNoteOn(48, 00, channel);
   }
   if ( debouncer45.rose() ) {
     usbMIDI.sendNoteOn(49, 00, channel);
   }
   if ( debouncer46.rose() ) {
     usbMIDI.sendNoteOn(50, 00, channel);
   }
   if ( debouncer47.rose() ) {
     usbMIDI.sendNoteOn(51, 00, channel);
   }
   if ( debouncer48.rose() ) {
     usbMIDI.sendNoteOn(52, 00, channel);
   }  


   //board4 OFF
   if ( debouncer49.rose() ) {
     ledState = !ledState;
     digitalWrite(LED_PIN,ledState);  //dioda
   }
   if ( debouncer49.rose() ) {
     usbMIDI.sendNoteOn(53, 00, channel);
   }
   if ( debouncer50.rose() ) {
     usbMIDI.sendNoteOn(54, 00, channel);
   }
   if ( debouncer51.rose() ) {
     usbMIDI.sendNoteOn(55, 00, channel);
   }
   if ( debouncer52.rose() ) {
     usbMIDI.sendNoteOn(56, 00, channel);
   }
   if ( debouncer53.rose() ) {
     usbMIDI.sendNoteOn(57, 00, channel);
   }
   if ( debouncer54.rose() ) {
     usbMIDI.sendNoteOn(58, 00, channel);
   }
   if ( debouncer55.rose() ) {
     usbMIDI.sendNoteOn(59, 00, channel);
   }
   if ( debouncer56.rose() ) {
     usbMIDI.sendNoteOn(60, 00, channel);
   }
   if ( debouncer57.rose() ) {
     usbMIDI.sendNoteOn(61, 00, channel);
   }
   if ( debouncer58.rose() ) {
     usbMIDI.sendNoteOn(62, 00, channel);
   }
   if ( debouncer59.rose() ) {
     usbMIDI.sendNoteOn(63, 00, channel);
   }
   if ( debouncer60.rose() ) {
     usbMIDI.sendNoteOn(64, 00, channel);
   }
   if ( debouncer61.rose() ) {
     usbMIDI.sendNoteOn(65, 00, channel);
   }
   if ( debouncer62.rose() ) {
     usbMIDI.sendNoteOn(66, 00, channel);
   }
   if ( debouncer63.rose() ) {
     usbMIDI.sendNoteOn(67, 00, channel);
   }
   if ( debouncer64.rose() ) {
     usbMIDI.sendNoteOn(68, 00, channel);
   }

//board5 OFF
   if ( debouncer65.rose() ) {
     ledState = !ledState;
     digitalWrite(LED_PIN,ledState);  //dioda
   }
   if ( debouncer65.rose() ) {
     usbMIDI.sendNoteOn(69, 00, channel);
   }
   if ( debouncer66.rose() ) {
     usbMIDI.sendNoteOn(70, 00, channel);
   }
   if ( debouncer67.rose() ) {
     usbMIDI.sendNoteOn(71, 00, channel);
   }
   if ( debouncer68.rose() ) {
     usbMIDI.sendNoteOn(72, 00, channel);
   }
   if ( debouncer69.rose() ) {
     usbMIDI.sendNoteOn(73, 00, channel);
   }
   if ( debouncer70.rose() ) {
     usbMIDI.sendNoteOn(74, 00, channel);
   }
   if ( debouncer71.rose() ) {
     usbMIDI.sendNoteOn(75, 00, channel);
   }
   if ( debouncer72.rose() ) {
     usbMIDI.sendNoteOn(76, 00, channel);
   }
   if ( debouncer73.rose() ) {
     usbMIDI.sendNoteOn(77, 00, channel);
   }
   if ( debouncer74.rose() ) {
     usbMIDI.sendNoteOn(78, 00, channel);
   }
   if ( debouncer75.rose() ) {
     usbMIDI.sendNoteOn(79, 00, channel);
   }
   if ( debouncer76.rose() ) {
     usbMIDI.sendNoteOn(80, 00, channel);
   }
   if ( debouncer77.rose() ) {
     usbMIDI.sendNoteOn(81, 00, channel);
   }
   if ( debouncer78.rose() ) {
     usbMIDI.sendNoteOn(82, 00, channel);
   }
   if ( debouncer79.rose() ) {
     usbMIDI.sendNoteOn(83, 00, channel);
   }
   if ( debouncer80.rose() ) {
     usbMIDI.sendNoteOn(84, 00, channel);
   }

   //board6 OFF
   if ( debouncer81.rose() ) {
     ledState = !ledState;
     digitalWrite(LED_PIN,ledState);  //dioda
   }
   if ( debouncer81.rose() ) {
     usbMIDI.sendNoteOn(85, 00, channel);
   }
   if ( debouncer82.rose() ) {
     usbMIDI.sendNoteOn(86, 00, channel);
   }
   if ( debouncer83.rose() ) {
     usbMIDI.sendNoteOn(87, 00, channel);
   }
   if ( debouncer84.rose() ) {
     usbMIDI.sendNoteOn(88, 00, channel);
   }
   if ( debouncer85.rose() ) {
     usbMIDI.sendNoteOn(89, 00, channel);
   }
   if ( debouncer86.rose() ) {
     usbMIDI.sendNoteOn(90, 00, channel);
   }
   if ( debouncer87.rose() ) {
     usbMIDI.sendNoteOn(91, 00, channel);
   }
   if ( debouncer88.rose() ) {
     usbMIDI.sendNoteOn(92, 00, channel);
   }
   if ( debouncer89.rose() ) {
     usbMIDI.sendNoteOn(93, 00, channel);
   }
   if ( debouncer90.rose() ) {
     usbMIDI.sendNoteOn(94, 00, channel);
   }
   if ( debouncer91.rose() ) {
     usbMIDI.sendNoteOn(95, 00, channel);
   }
   if ( debouncer92.rose() ) {
     usbMIDI.sendNoteOn(96, 00, channel);
   }
   if ( debouncer93.rose() ) {
     usbMIDI.sendNoteOn(97, 00, channel);
   }
   if ( debouncer94.rose() ) {
     usbMIDI.sendNoteOn(98, 00, channel);
   }
   if ( debouncer95.rose() ) {
     usbMIDI.sendNoteOn(99, 00, channel);
   }
   if ( debouncer96.rose() ) {
     usbMIDI.sendNoteOn(100, 00, channel);
   }
    
   while (usbMIDI.read()) {
    // ignore incoming messages
  }
}

