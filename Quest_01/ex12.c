#include <stdio.h>
#include <stdlib.h>

int my_is_negative(int n) {                
  if (n >= 0) {                            
    return 1;                              
  }
  else {                                   
    return 0;
  }
}

int main(int argc, char* argv[])
{
  int res = my_is_negative(atoi(argv[1]));
  printf("%d", res);

  return 0;
}