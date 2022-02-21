#include <stdio.h>                                          
#include<string.h>                                          

int my_string_index(char* param_1, char param_2)           
{
    int index = 0;                                         
    while (*param_1 != '\0') {                             
        if (*param_1 == param_2) {                         
            return index;                                  
        }
        *param_1++;                                        
        index++;                                           
    }
    return -1;                                             
}

int main(int argc, char* argv[]) {                         

    char s1[] = "Hello";                                   
    char s2 = 'l';                                         
    int res;                                               
    res = my_string_index(s1, s2);                         
    printf("%d\n", res);                                   
    return 0;                                              
    
}

