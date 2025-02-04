
#include "locker.h"
#include "pico/stdlib.h"

int nth_digit(int decimal, int nth)
{
  for(; nth>1; nth--) decimal/=10;
  return decimal%10;
}