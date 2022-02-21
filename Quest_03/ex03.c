#include <stdio.h>                                                  


char* my_strncpy(char* param_1, char* param_2, int param_3) {                 
    
    int i;                                                                    
    for(i = 0; i < param_3 && param_2[i] != '\0'; i++) {                      
        param_1[i] = param_2[i];                                              

}
    return param_1;                                                           
}

int main() {                                                                  

    char dst[20];                                                             
    char src[] = "dffdjfksdfjkYTTT";                                          
    int num = 7;                                                              

    my_strncpy(dst, src, num);                                                
    printf("%s", dst);                                                        

    return 0;                                                                           
}