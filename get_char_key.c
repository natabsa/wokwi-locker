
#include "locker.h"
#include "pico/stdlib.h"

static  const char key_map[][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

char get_char_key()
{
  for(int r=R1; r<=R4; r++)
  {
    gpio_put(r, 1);
    for(int c=C1; c<=C4; c++)
    {
      if(gpio_get(c))
      {
        gpio_put(r, 0);
        return key_map[r - ROWS_OFFSET - 1][c - COLS_OFFSET - 1];
      }
    }
    gpio_put(r, 0);
  }
  return '\0';
}