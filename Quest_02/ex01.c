#include <stdio.h>                         

int my_swap(int *x, int *y) {              
    int z;                                 
    z = *x;                                
    *x = *y;                               
    *y = z;                                
    return *x, *y;                         
}

int main() {                               

    int a = 12;                            
    int b = 15;                            

    printf("a - %d\tb - %d\n", a, b);      

    my_swap(&a, &b);                       
    printf("a - %d\tb - %d\n", a, b);      

    return 0;                              
}