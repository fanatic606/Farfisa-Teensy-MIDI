
// Include the Bounce2 library found here :
// https://github.com/thomasfredericks/Bounce-Arduino-Wiring
#include <Wire.h>
#include <Bounce2mcp.h>
#include <Adafruit_MCP23017.h>
const int channel = 1;
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

// Instantiate an MCP object
Adafruit_MCP23017 mcp0;
Adafruit_MCP23017 mcp1;

void setup() {
  
  // Begin the MCP object
  mcp0.begin(1);
  mcp1.begin(3);
  Wire.begin();
  Wire.setSDA(4);
  Wire.setSCL(3);

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

    
  // Setup the LED :
  pinMode(LED_PIN,OUTPUT);
  digitalWrite(LED_PIN,ledState);
 
  
}

void loop() {

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

   
   
   // Call code if Bounce fell (transition from HIGH to LOW) :
  
   //board1
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

//board2
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
   
   
//board1 off
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
//board2 off
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
 
   
   while (usbMIDI.read()) {
    // ignore incoming messages
  }
}

