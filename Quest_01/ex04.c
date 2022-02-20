#include <stdio.h>

int main() {                                                                      //main()
  int my_age = 34;                                                                //variable that stores an integer
  char my_name[] = "Luke";                                                        //variable that stores a string
  char my_comma = ',';                                                            //variable that stores a single character, comma

  printf("Hello %s%c I'm %d years old.\n", my_name, my_comma, my_age);            //printf() to print a concacanated string
  return 0;                                                                       //main() returns NULL
}