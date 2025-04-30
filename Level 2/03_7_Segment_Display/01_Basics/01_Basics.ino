#include<TM1637Display.h>

#define CLK 8
#define DIO 9

TM1637Display display = TM1637Display(CLK, DIO);

void setup() {
  display.clear();
  display.setBrightness(7); // (0:dimmest - 7:brightest)
}

void loop() {
  // display.showNumberDec(42);
  
  // display.clear();
  // display.showNumberDec(12);
  // delay(2000);
  // display.clear();
  // display.showNumberDec(-999);
  // delay(2000);

  // display.showNumberDec(42, false);  // __42
  // display.showNumberDec(472, false, 2, 0); // 72__
  // display.showNumberDec(472, false, 3, 0); // 472_
  // display.showNumberDec(42, true); // 0042
  // display.showNumberDec(42, false, 2, 1); // _42_ 
  // display.showNumberDec(-6, false, 3, 0); // _-6_
  // display.showNumberDec(1234);

  display.showNumberDecEx(1530, 0b01000000, true, 4, 0);
}
