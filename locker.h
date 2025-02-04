
#ifndef LOCKER
#define LOCKER

#define R1 2
#define R2 3
#define R3 4
#define R4 5

#define G_LED 27
#define R_LED 28

#define C1 6
#define C2 7
#define C3 8
#define C4 9

#define A 10
#define B 11
#define C 12
#define D 13
#define E 14
#define F 15
#define G 16

#define ROWS 4
#define COLS 4

#define ROWS_OFFSET 1
#define COLS_OFFSET 5

#define DIG1 18
#define DIG2 19
#define DIG3 20
#define DIG4 21

#define PASS 1234

void setup();

void loop();

int passkey_get_and_display();

void enter_blocked_state();

int nth_digit(int decimal, int nth);

void display_number(int digits, int number);

char get_char_key();

void display_countdown_10();

void set_number(int n);

#endif