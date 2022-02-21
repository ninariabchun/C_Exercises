#include <stdio.h>                                          
#include <string.h>                                         


char* my_strstr(char* param_1, char* param_2) {                 
      
        if (strlen(param_1) == 0) {                             
            return NULL;                                        
        }
        if (strlen(param_2) == 0) {                             
            return param_1;                                     
        }

        int i = 0;                                              
        int len = strlen(param_2);                              
        //int match_count = 0;

        while (param_1[i]) {                                    
            if (param_1[i] == param_2[0]) {                     
                int j = 0;                                      
                while (param_2[j]) {                            
                    if (param_1[i] != param_2[j]) {         
                        break;                              
                    }
                    if (j == len - 1) {                     
                        return &param_1[i];                 
                    }
                    j++;                                    
                }
               
            }
            i++;                                             
           
        }

}
    
        int main() {

                char s1[] = "Hello";
                char s2[] = "ll";
                char *ptr;
                ptr = my_strstr(s1, s2);
                printf("%s", ptr);
                
                return 0;
        }

