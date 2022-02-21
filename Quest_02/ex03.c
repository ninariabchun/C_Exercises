#include <stdio.h>  
#include <unistd.h> 

int my_putchar(char c) {       
  return write(1, &c, 1);      
}

void my_putstr(char *p) {      
    while (*p != '\0') {       
        my_putchar(*p);        
        *p++;                  
    }
}

int main() {                   

  char s[] = "1acjgndgfbd dfd";
  //printf("%s\n", s);         
  
  my_putstr(&s);               
  //printf("\t%s", s);  
  return 0;                    
}