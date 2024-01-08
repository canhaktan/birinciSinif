
#include <stdio.h>

enum Day { Monday =1 , Tuesday , Wednesday, Thursday, Friday, 
          Saturday, Sunday};

// We can use typedef to give a type alies to an enum... this way we can declare
// buttons using "Button x;" instead of "enum button x;", which is a bit nicer.
typedef enum button { OFF, ON } Button;

// enums can be function return types and parameters
Button press(Button current);
void print_button(Button current);

int main(void)
{
  // we can declare variables of type Day and assign the values we've created
  enum Day today = Tuesday;
  enum Day yesterday = Monday;
  enum Day tomorrow = Wednesday;

  // we can print out enums with %d as the placeholder as they are really int
  // values in practice
  printf("Yesterday: %d\n", yesterday);
  printf("Today: %d\n", today);
  printf("Tomorrow: %d\n", tomorrow);
  printf("Friday: %d\n", Friday);

  // declare and initialize a Button
  Button power = ON;

  // call our functions to work with Buttons
  print_button(power);
  power = press(power);
  print_button(power);
  power = press(power);
  power = press(power);
  print_button(power);

  return 0;
}

// flips the state of a button by returning the opposite of its current value
Button press(Button current)
{
  if (current == ON) return OFF;
  else return ON;
}

// does a "pretty print" of a button... prints a string ON or string OFF
void print_button(Button current)
{
  if (current == ON) printf("ON:%d\n",current);
  else if (current == OFF) printf("OFF:%d\n",current);
}


