#include <stdio.h>                                                      
#include <string.h>                                                     
#include <stdlib.h>                                                     

#ifndef STRUCT_STRING_ARRAY                                             
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif


char* my_join(string_array* param_1, char* param_2)                     
{
        int len = param_1->size;                                        
        if(len == 0) {                                                  
            return NULL;                                                
        }
        
        char **my_arr = param_1->array;                                 
        int total_len = 0;                                              

        for(int i = 0; i < len; i++) {                                  
            total_len += strlen(my_arr[i]) + strlen(param_2);           
        }
        
        char *res = malloc(total_len);                                                                        
        *res = 0;                                                       

        for(int i = 0; i < len; i++) {                                  
            strcat(res, my_arr[i]);                                     
                if(i < len - 1)                                         
                    strcat(res, param_2);                               
        }

        return res;                                                     

}


int main() {      

    struct s_string_array s = {                                                     
        .size = 3,                                                                  
        .array = (char*[]){"abc", "def", "gh", "!"}                                 
    };

    char *t = "-";                                                                

    my_join(&s, t);                                                               
    printf("%s", my_join(&s, t));                                                 
    return 0;
}