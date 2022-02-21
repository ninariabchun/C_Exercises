#include <stdio.h>                                       
#include <stdlib.h>                                      

int my_mult(int num1, int num2) {                        
    int result;                                          
    result = num1 * num2;                                
    return result;                                       
}

int main(int argc, char* argv[]) {                       
                                        
    int a;                                               
    int b;                                               
    int res;                                             

    if(argc == 3) {                                      
        a = atoi(argv[1]);                               
        b = atoi(argv[2]);                               
        res = my_mult(a, b);                             
        printf("%d\n", res);                             
    } else {                                             
        printf("Not enough arguments!");                 
    }
        return 0;                                        

}