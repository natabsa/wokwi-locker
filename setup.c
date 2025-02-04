
#include "pico/stdlib.h"
#include "locker.h"

void setup()
{
  //initialize keypad matrix rows 
  for(int i=R1; i<R1+4; i++)
  {
    gpio_init(i);
    gpio_set_dir(i, GPIO_OUT);
    gpio_put(i, 0);
  }
  //initialize gpios for keypad matrix columns
  for(int i=C1; i<C1+4; i++)
  {
    gpio_init(i);
    gpio_set_dir(i, GPIO_IN);
    gpio_pull_down(i);
  }
  //initialize gpios for displays leds 
  for(int i=A; i<A+7; i++)
  {
    gpio_init(i);
    gpio_set_dir(i, GPIO_OUT);
    gpio_put(i, 0); 
  }
  //initialize displays digit 1 control gpio
  gpio_init(DIG1);
  gpio_set_dir(DIG1, GPIO_OUT);
  gpio_put(DIG1, 1);
  //initialize displays digit 2 control gpio
  gpio_init(DIG2);
  gpio_set_dir(DIG2, GPIO_OUT);
  gpio_put(DIG2, 1);
  //initialize displays digit 3 control gpio
  gpio_init(DIG3);
  gpio_set_dir(DIG3, GPIO_OUT);
  gpio_put(DIG3, 1);
  //initialize displays digit 4 control gpio
  gpio_init(DIG4);
  gpio_set_dir(DIG4, GPIO_OUT);
  gpio_put(DIG4, 1);

  //initialize green led gpio
  gpio_init(G_LED);
  gpio_set_dir(G_LED, GPIO_OUT);
  gpio_put(G_LED, 0);

  //initialize red led gpio
  gpio_init(R_LED);
  gpio_set_dir(R_LED, GPIO_OUT);
  gpio_put(R_LED, 0);
}