#include <stdio.h>
#include <string.h>

int my_strcmp(char* param_1, char* param_2) {
    
    int i;      

    for(i = 0; param_1[i] == param_2[i]; i++) 

        if(param_1[i] == '\0') 
                return 0;

        return param_1[i] - param_2[i]; 
}


int main(int argc, char* argv[]) {                           

        if (argc == 3) {                                     
                char s1[20];                                 
                char s2[20];                                 
                strcpy(s1, argv[1]);                         
                strcpy(s2, argv[2]);                         
              
                int res;                                     
                res =  my_strcmp(s1, s2);                    
                printf("%d", res);                           
        }
        return 0;
}

