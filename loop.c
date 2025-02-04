
#include "locker.h"
//#include <stdio.h>
#include "pico/stdlib.h"

void loop()
{
  int passkey;
  // 3 tries before entering blocked state
  for(int i=0; i<3; i++)
  {
    //read passkey from entered from keypad
    passkey = passkey_get_and_display();

    //validade passkey
    if(passkey == PASS)
    {
      //unlock
      gpio_put(G_LED, 1);
      //...
      display_countdown_10();
      //lock again
      gpio_put(G_LED, 0);
      return;
    }
  }
  // since passkey was invalid more than 3 times enter blocked stated for 10 seconds
  enter_blocked_state();
}