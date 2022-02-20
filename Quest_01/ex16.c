#include <stdio.h>  
#include <ctype.h> 
#include <stdlib.h> 


int my_islower(int x) {                     
                                        
     if (x >= 97 && x <= 122)               
      return 1;                             
     else                                   
      return 0;                             
}


int main(int argc, char* argv[]) {          
    
    int res = my_islower(atoi(argv[1]));    
    printf("%d", res);                     
    return 0;                               
}