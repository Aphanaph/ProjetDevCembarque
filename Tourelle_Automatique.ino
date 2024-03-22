// Librairies:
#include <LiquidCrystal.h>

// Configuration des ports


// Déclaration de variables


// initialize the library with the numbers of the interface pins
LiquidCrystal lcd1(7, 8, 9, 10, 11, 12);

void setup() {
  // put your setup code here, to run once:

  // set up the LCD's number of columns and rows:
  lcd1.begin(16, 2);
  // Print a message to the LCD.
  lcd1.print("Hello, World!");

}

void loop() {
  // put your main code here, to run repeatedly:

    // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd1.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd1.print(millis() / 1000);

}
