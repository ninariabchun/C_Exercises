#include <stdio.h> 
#include <ctype.h> 

int my_isalpha(int c) {                                  
                                                       
 if (c >= 'a' && c <='z' || c>= 'A' && c <= 'Z')         
  return 1;                                              
 else                                                    
 return 0;                                               
}

int main(){                                              

    char chr;                                            
    printf("Enter a character or a number: ");           
    scanf("%c", &chr);                                   
    int res;                                             
    res = my_isalpha(chr);                               
    printf("%d", res);                                   
    return 0;                                            

}