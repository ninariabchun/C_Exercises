#include <stdio.h>                          
#include <string.h>                                   

char* my_strchr(char* param_1, char param_2) { "abc\0" "c"

    char *param_3 = NULL;                  
    int i;                                 
    
    for(i = 0; param_1[i] != '\0'; i++) {  
        if(param_1[i] == param_2) {        
            param_3 = &param_1[i];         
            break;           
        }
    }
    return param_3;                        
}

int main(int argc, char* argv[]) {         

    if(argc == 3) {                        
        char str[20];                      
        char c;                            
        char *ptr;                         
        strcpy(str, argv[1]);              
        c = argv[2][0];                    
        ptr = my_strchr(str, c);           
        printf("%s", ptr);                 
    }

    return 0;
}