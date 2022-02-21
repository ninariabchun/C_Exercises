#include <stdio.h>
#include <string.h>


char* my_upcase(char* param_1) {
    int i;
        for(i = 0; i <=strlen(param_1); i++) {
            if(param_1[i]>=97 && param_1[i]<=122)
                param_1[i] = param_1[i] - 32;
        }
    
    return param_1;
}

int main(int argc, char* argv[]) {

    if(argc == 2) {
        char s1[10];
        strcpy(s1, argv[1]);
        my_upcase(s1);
        printf("%s", s1);
    }

 return 0;
}