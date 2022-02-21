#include <stdio.h>
#include <string.h>

char* my_strcpy(char* param_1, char* param_2) {
    int i;  
    for(i = 0; param_2[i] != '\0'; i++) { 
        param_1[i] = param_2[i]; 
    }

    param_2[i] = '\0'; 
    return param_1; 
}

int main() {

    char s1[30];
    char s2[] = "Jvcxcgkgkgk";

    my_strcpy(s1, s2);
    printf("%s", s1);

    return 0;
}