#include <stdio.h>
#include <unistd.h>


#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

void my_print_words_array(string_array *param_1)                  
{
    for (int i = 0; i < param_1->size; i++)                       
    {
        char *s = param_1->array[i];                              
        while (*s)                                                
            putchar(*s++);                                        
        putchar('\n');                                            
    }
}


int main() {                                                      

    struct s_string_array Struct1;                                
    struct s_string_array* ptr_on_Struct1 = &Struct1;             

    ptr_on_Struct1->size = 3;                                     
    ptr_on_Struct1->array = (char *[]){"abc", "def", "gh"};       
    
    my_print_words_array(ptr_on_Struct1);                          
    
}