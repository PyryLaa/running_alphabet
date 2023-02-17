#include <LiquidCrystal.h>
//Program makes alphabets run on a 16x2 LCD display. First row left to right and second row right to left.
//Alphabets are here as ASCII codes, both upper and lower case letters included

const int rs = 12, e = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, e, d4, d5, d6, d7);
int a = 0, b = 0;
char alphabet = 65;

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
}

void loop() {
  while (a < 16){
    if (alphabet >= 123){
      alphabet = 65;
    }
    else if (alphabet == 91){
      alphabet = 97;
    }
    
    lcd.setCursor(a, b);
    lcd.print(alphabet);
    alphabet++;
    a++;
    delay(200);
    lcd.clear();
  }
  b++;
  while (a > 0){
    if (alphabet >= 123){
      alphabet = 65;
    }
    else if (alphabet == 91){
      alphabet = 97;
    }
    a--;
    lcd.setCursor(a, b);
    lcd.print(alphabet);
    alphabet++;
    
    delay(200);
    lcd.clear();
  }
  b--;

}
