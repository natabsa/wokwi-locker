
#include "locker.h"
#include "pico/stdlib.h"

void enter_blocked_state()
{
  gpio_put(DIG4, 0);
  for(int i=9; i>-1; i--)
  {
    set_number(i);
    gpio_xor_mask(1<<R_LED);
    sleep_ms(1000);
  }
  gpio_put(DIG4, 1);
  gpio_put(R_LED, 0);
}