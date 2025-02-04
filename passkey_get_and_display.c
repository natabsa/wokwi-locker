
#include "locker.h"
#include "pico/stdlib.h"

int passkey_get_and_display()
{
  int pass=0, temp, digits_read=0;
  while(1)
  {
    //temp stores char read from keypad
    temp = get_char_key();
    sleep_ms(150);
    temp-=48;
    if(temp>(-1) && temp<10)
    {
      digits_read++;
      pass*=10;
      pass+=temp;
      if(digits_read==4)
      {
        for(int i=0; i<100; i++) display_number(digits_read, pass);
        return pass;
      }
    }
    display_number(digits_read, pass);
  }
}