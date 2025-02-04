
#include "locker.h"
#include "pico/stdlib.h"

void display_countdown_10()
{
  gpio_put(DIG4, 0);
  for(int i=9; i>-1; i--)
  {
    set_number(i);
    sleep_ms(1000);
  }
  gpio_put(DIG4, 1);
}