#include <stdio.h>                         
#include <string.h>                        

char* reverse_string(char* param_1) {      
    char temp;                             
    int i, j = 0;                          
    i = 0;                                 
    j = strlen(param_1) - 1;               
    while(i < j) {                         
        temp       = param_1[i];           
        param_1[i] = param_1[j];           
        param_1[j] = temp;                 
        i++;                               
        j--;                               
    }
    return param_1;
}

int main() {

    char str[] = "abcdefghi";
    reverse_string(str);
    printf("%s", str);
    return 0;
}