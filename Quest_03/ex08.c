#include <stdbool.h>                                           
#include <stdio.h>

#ifndef STRUCT_INTEGER_ARRAY                                   
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

bool my_is_sort(integer_array* param_1)                             
{
    if (param_1->size == 0) {                                       
        return true;                                                
    }
    
    bool asc = true;                                                
    bool desc = true;                                               
    int prev = param_1->array[0];                                   

    for (int i = 1; i < param_1->size; i++) {                       
        if (param_1->array[i] > prev) {                             
            desc = false;                                           
        }
        if (param_1->array[i] < prev) {                             
            asc = false;                                            
        }
        //prev = param_1->array[i];
    }
    if (asc || desc) {                                              
        return true;                                                
    }
    return false;                                                   
}

int main() {                                                    

    struct s_integer_array Struct1;                             
    struct s_integer_array* ptr_on_Struct1 = &Struct1;          

    ptr_on_Struct1->size = 4;                                   
    ptr_on_Struct1->array = (int[]){1, 2, 0, 4};                

    bool x = my_is_sort(ptr_on_Struct1);                        

    printf("%d", x);                                            
    return 0;
}