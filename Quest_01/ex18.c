#include <stdio.h>  
#include <ctype.h> 

int my_isspace(int c) {                                   

 if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v')     
  return 1;                                                                         
 else                                                                               
  return 0;                                                                         
}


int main() {

  int res;
  res = my_isspace('0');
  printf("%d", res);
  return 0;
}