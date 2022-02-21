#include <stdio.h>                              

int my_sub(int num1, int num2) {                
    int result;                                 
    result = num1 - num2;                       
    return result;                              
}

int main() {                                    

    int a, b;                                   

    printf("Enter first number: ");             
    scanf("%d", &a);                            

    printf("Enter the second number: ");        
    scanf("%d", &b);                            

    int res = my_sub(a, b);                     
    printf("%d", res);                          

    return 0;                                   

}