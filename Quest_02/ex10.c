#include <stdio.h>                                  
#include <string.h>                                 


char* my_downcase(char* param_1) {                  
    int i;                                          
        for(i = 0; i <=strlen(param_1); i++) {      
            if(param_1[i]>=65 && param_1[i]<=90)    
                param_1[i] = param_1[i] + 32;       
        }
    
    return param_1;                                 
}

int main(int argc, char* argv[]) {                  

    if(argc == 2) {                                 
        char str[20];                               
        strcpy(str, argv[1]);                       
        my_downcase(str);                           
        printf("%s", str);                          
    }

    return 0;                                       
}