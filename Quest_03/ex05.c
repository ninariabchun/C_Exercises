#include <stdio.h>                          
#include <string.h>                         

char* my_strrchr(char* param_1, char param_2) {

    char *param_3 = NULL;                   
    int i, j;                               
    
    for(i = 0; param_1[i] != '\0'; i++) {   
    }
    for(j = i - 1; j >= 0; j--) {           
        if(param_1[j] == param_2) {
            param_3 = &param_1[j];
            break;
        }
    }
    return param_3;                          
}

int main(int argc, char* argv[]) {           

    if (argc == 3) {                         
        char s[20];                          
        char c;                              
        strcpy(s, argv[1]);                  
        c = argv[2][0];                      
        char *ptr;                           
        ptr = my_strrchr(s, c);              
        printf("%s", ptr);                   
    }

    return 0;
}