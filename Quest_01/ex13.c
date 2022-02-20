#include <stdio.h>                
#include <stdlib.h>               

int my_abs(int n) {               
    abs(n);                       
    return abs(n);                
}


int main() {                      
    int res;
    res = my_abs(-2);
    printf("%d", res);
    return 0;
}