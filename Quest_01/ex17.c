#include <stdio.h>  
#include <ctype.h> 


int my_isupper(int x) {                 
     if (x >= 'A' && x <= 'Z')          
      return 1;                         
     else                               
      return 0;                         
}

int main() {                            

    char c;                                    
    printf("Enter a letter of alphabet, any case: ");  
    scanf("%c", &c);                                   
    int res;                                           
    res = my_isupper(c);                               
    printf("%d", res);                                 
    return 0;
}