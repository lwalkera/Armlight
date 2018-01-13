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
#define BUZZER 12

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

void decay_leds()
{
  int i;
  for(i=0; i<NUM_LEDS; i++)
  {
    leds[i].fadeToBlackBy(30);
  }
  FastLED.show();
}

void beep(int time)
{
	digitalWrite(BUZZER, 1);
	delay(time);
	digitalWrite(BUZZER, 0);
}

void setup() {
	digitalWrite(BUZZER, 0);
	digitalWrite(9, 0);
	pinMode(BUZZER, OUTPUT);
	pinMode(9, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
  //Begin LibrePilotSerial communication
  lps.serial->begin(57600);
  FastLED.addLeds<APA102, 4, 5, BGR>(leds, NUM_LEDS);
  setleds(CRGB::White);
	beep(500);
}
 
void loop() {
  static unsigned int ticks = 0;
  static int fs = -1;

  delay(30);
  if(fs == FLIGHTSTATUS_ARMED_DISARMED)
  {
    static int x=0;
    static int inc = 1;

    decay_leds();
    if(ticks % 5 == 0)
    {
      leds[x] = CRGB::Green;
      x += inc;

      if(x == NUM_LEDS)
      {
        x -= 2;
        inc = -1;
      }
      else if(x == 0)
      {
        inc = 1;
      }
    }
  }
  
  if(ticks++ % 10 == 0)
  {
    //Request object from FC
    lps.request(FLIGHTSTATUS_OBJID);

    //Receive object from FC. This function will block until the specified object was received or it times out.
    //It returns true if a valid packet was received
    //the packet is stored in the array of the object packet union
    boolean ok = lps.receive(FLIGHTSTATUS_OBJID, FlightStatusDataUnion.arr, 200);

    //the packet data may only be accessed if the return value was true
    if(ok) {
			int last_fs = fs;
      fs = FlightStatusDataUnion.data.Armed;

      //the packet can be accessed in a structured manner via the data member
      switch(FlightStatusDataUnion.data.Armed)
      {
        case FLIGHTSTATUS_ARMED_ARMED:
          //the quad is armed, do something!
          digitalWrite(LED_BUILTIN, HIGH);
					if(last_fs != fs)
					{
						setleds(CRGB::Red);
						beep(1000);
					}
          break;
        case FLIGHTSTATUS_ARMED_ARMING:
					if(last_fs != fs)
					{
						setleds(CRGB::Yellow);
						beep(30);
					}
          break;
        case FLIGHTSTATUS_ARMED_DISARMED:
          digitalWrite(LED_BUILTIN, LOW);
					if(last_fs != fs)
					{
						setleds(CRGB::Green);
						beep(100);
						delay(100);
						beep(100);
					}
          break;
      }
    }
  }
}
