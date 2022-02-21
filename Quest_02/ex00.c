#include <stdio.h>                                      
void my_initializer(int* param_1)                       
{
    *param_1 = 0;                                       
}

int main() {                                            

    int a = 10;                                         
    printf("%d\n", a);                                  
    
    my_initializer(&a);                                 
    printf("%d\n", a);                                  
    return 0;
}