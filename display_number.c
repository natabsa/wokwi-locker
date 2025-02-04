
#include "locker.h"
#include "pico/stdlib.h"

void display_number(int digits, int number)
{
  for(int i=DIG4, j=4; i>DIG4-digits; i--, j--)
  {
    set_number(nth_digit(number, DIG4-i+1));
    gpio_put(i, 0);
    sleep_ms(5);
    gpio_put(i, 1);
  }
}