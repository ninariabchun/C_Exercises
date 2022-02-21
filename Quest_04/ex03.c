#include <stdlib.h>                                        
#include <string.h>                                        
#include <stdio.h>                                         

#ifndef STRUCT_STRING_ARRAY                                
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY                                    
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


integer_array* my_count_on_it(string_array* param_1)              
{
    integer_array* ret = malloc(sizeof(integer_array));           
    ret->size = param_1->size;                                    
    ret->array = malloc(sizeof(int)* param_1->size);              

    int i;                                                        
    for(i = 0; i < param_1->size; i++) {                          
        ret->array[i] = strlen(param_1->array[i]);                
    }
    

    return ret;
}

int main() {

    struct s_string_array s;
    s.size = 4;
    s.array = (char *[]){"This", "is", "the", "way"};
    struct s_integer_array *count = malloc(sizeof(integer_array));
    count = my_count_on_it(&s);
    printf("%d", count->array[3]);

    free(count);
    
    return 0;
}