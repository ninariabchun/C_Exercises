#include <stdio.h> 
#include <unistd.h>

void my_putchar(char c) {       
  write(1, &c, 1);              
}

void my_print_alphabet (void) { 
  char letter;                  
  letter = 'a';                  
  while (letter <= 'z')          
  {
      my_putchar(letter);        
      letter++;                  
  }
  my_putchar('\n');              
}

int main() {                     
  my_print_alphabet();           
  return 0;                      
}


