#include <bitswap.h>
#include <chipsets.h>
#include <color.h>
#include <colorpalettes.h>
#include <colorutils.h>
#include <controller.h>
#include <cpp_compat.h>
#include <dmx.h>
#include <FastLED.h>
#include <fastled_config.h>
#include <fastled_delay.h>
#include <fastled_progmem.h>
#include <fastpin.h>
#include <fastspi.h>
#include <fastspi_bitbang.h>
#include <fastspi_dma.h>
#include <fastspi_nop.h>
#include <fastspi_ref.h>
#include <fastspi_types.h>
#include <hsv2rgb.h>
#include <led_sysdefs.h>
#include <lib8tion.h>
#include <noise.h>
#include <pixelset.h>
#include <pixeltypes.h>
#include <platforms.h>
#include <power_mgt.h>

//Library to use pins as serial port
#include <SoftwareSerial.h>
 
//Include a librepilot header file
#include "flightstatus.h"
 
//Include the LibrePilotSerial Library
#include "LibrePilotSerial/LibrePilotSerial.h"
 
//Initialize serial port
SoftwareSerial mySerial(2, 3);  // RX, TX
 
//Initialize LibrePilot serial connection
LibrePilotSerial lps(&mySerial);

#define NUM_LEDS 5

CRGB leds[NUM_LEDS];

void setleds(CRGB color)
{
  int i;
  for(i=0; i<NUM_LEDS; i++)
  {
    leds[i] = color;
  }
  FastLED.show();
}
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
  //Begin LibrePilotSerial communication
  lps.serial->begin(57600);
  FastLED.addLeds<APA102, 4, 5, BGR>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  setleds(CRGB::White);
}
 
void loop() {
  //Request object from FC
  lps.request(FLIGHTSTATUS_OBJID);
 
  //Receive object from FC. This function will block until the specified object was received or it times out.
  //It returns true if a valid packet was received
  //the packet is stored in the array of the object packet union
  boolean ok = lps.receive(FLIGHTSTATUS_OBJID, FlightStatusDataUnion.arr, 200);
 
  //the packet data may only be accessed if the return value was true
  if(ok) {
 
    //the packet can be accessed in a structured manner via the data member
    if (FlightStatusDataUnion.data.Armed == FLIGHTSTATUS_ARMED_ARMED) {
      //the quad is armed, do something!
      digitalWrite(LED_BUILTIN, HIGH);
      setleds(CRGB::Red);
    }
    else
    {
      digitalWrite(LED_BUILTIN, LOW);
      setleds(CRGB::Green);
    }
  }
 
  delay(250);  //wait 250 ms
}
