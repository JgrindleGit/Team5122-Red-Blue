// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library
#include <Adafruit_NeoPixel.h>

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN            0

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      103

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel pixelss you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_RGB + NEO_KHZ800);

int delayval = 5; // delay for half a second

void setup() {
  pixels.begin(); // This initializes the NeoPixel library.

}

void loop() {
  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.
  int count = 0;
  while(count < 100){
    RedRandom();
    BlueRandom();
    count++;
  }
}
void RedRandom(){
    for(int i=0;i<NUMPIXELS-1;i++){
      pixels.setPixelColor(i, pixels.Color(0,125,0));
      Pink5122();
      pixels.show();
      delay(delayval);
    }
}
void BlueRandom(){
    for(int i=0;i<NUMPIXELS;i++){
      pixels.setPixelColor(i, pixels.Color(0,0,125));
      Pink5122();
      pixels.show();
      delay(delayval);
    }
}
void Pink5122(){
  for(int i =0; i<NUMPIXELS;i++){
    pixels.setPixelColor(20, pixels.Color(0,255,196));
    pixels.setPixelColor(21, pixels.Color(0,255,196));
    pixels.setPixelColor(22, pixels.Color(0,255,196));
    pixels.setPixelColor(24, pixels.Color(0,255,196));
    pixels.setPixelColor(29, pixels.Color(0,255,196));
    pixels.setPixelColor(31, pixels.Color(0,255,196));
    pixels.setPixelColor(32, pixels.Color(0,255,196));
    pixels.setPixelColor(33, pixels.Color(0,255,196));
    pixels.setPixelColor(35, pixels.Color(0,255,196));
    pixels.setPixelColor(37, pixels.Color(0,255,196));
    pixels.setPixelColor(38, pixels.Color(0,255,196));
    pixels.setPixelColor(39, pixels.Color(0,255,196));
    pixels.setPixelColor(42, pixels.Color(0,255,196));
    pixels.setPixelColor(44, pixels.Color(0,255,196));
    pixels.setPixelColor(46, pixels.Color(0,255,196));
    pixels.setPixelColor(48, pixels.Color(0,255,196));
    pixels.setPixelColor(50, pixels.Color(0,255,196));
    pixels.setPixelColor(52, pixels.Color(0,255,196));
    pixels.setPixelColor(54, pixels.Color(0,255,196));
    pixels.setPixelColor(55, pixels.Color(0,255,196));
    pixels.setPixelColor(57, pixels.Color(0,255,196));
    pixels.setPixelColor(59, pixels.Color(0,255,196));
    pixels.setPixelColor(61, pixels.Color(0,255,196));
    pixels.setPixelColor(62, pixels.Color(0,255,196));
    pixels.setPixelColor(64, pixels.Color(0,255,196));
    pixels.setPixelColor(65, pixels.Color(0,255,196));
    pixels.setPixelColor(66, pixels.Color(0,255,196));
    pixels.setPixelColor(71, pixels.Color(0,255,196));
    pixels.setPixelColor(72, pixels.Color(0,255,196));
    pixels.setPixelColor(73, pixels.Color(0,255,196));
    pixels.setPixelColor(75, pixels.Color(0,255,196));
    pixels.setPixelColor(77, pixels.Color(0,255,196));
    pixels.setPixelColor(78, pixels.Color(0,255,196));
    pixels.setPixelColor(79, pixels.Color(0,255,196));
    pixels.setPixelColor(81, pixels.Color(0,255,196));
  }
}

