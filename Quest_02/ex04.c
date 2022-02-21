#include <stdio.h>                             

int my_add(int num1, int num2) {               
    int sum;                                   
    sum = num1 + num2;                         
    return sum;                                
}

int main() {                                   

    int a = 5;                                 
    int b = 8;                                 
    printf("%d\n%d\n", a, b);                  

    int res = my_add(a, b);                
    printf("%d\n", res);                  
    return 0;                                  
}