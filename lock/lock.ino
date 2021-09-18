#include "DigiKeyboard.h"
#define KEY_DELETE 76

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  delay(5);
  DigiKeyboard.sendKeyStroke(KEY_DELETE, MOD_ALT_RIGHT | MOD_CONTROL_LEFT);
  delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (;;) {
    /*empty*/
  }
}
