#include <stdio.h>                                      

#ifndef STRUCT_INTEGER_ARRAY                           
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

void my_first_struct(integer_array* param_1) {                
        
    printf("%d\n", param_1->size);                            
    for(int i = 0; i < param_1->size; i++) {                  
            printf("%d\n", param_1->array[i]);                
    }                                 
}


int main() {                                               

    struct s_integer_array Struct1;                        
    struct s_integer_array* ptr_on_Struct1 = &Struct1;     

    ptr_on_Struct1->size = 5;                              
    ptr_on_Struct1->array = (int[]){3, 1, 6, 2, 8};        

    my_first_struct(ptr_on_Struct1);                       
    
    return 0;
}