#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h> // library required for IIC communication

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE); 

"Buat naro kodingan dari image2cpp"

int counter = 0; 

void setup(void) {
  u8g2.begin(); 
}

void loop(void) {

  u8g2.clearBuffer();				
  u8g2.drawXBMP(25, 17, 64, 64, epd_bitmap_allArray[counter]); 
  u8g2.sendBuffer();					

	counter = (counter + 1) % 7; 
}


