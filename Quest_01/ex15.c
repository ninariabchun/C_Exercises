#include <stdio.h>  
#include <stdlib.h> 
#include <ctype.h> /



int main(int argc, char* argv[]) {

    int res;
    res = isdigit(atoi(argv[1]));
    printf("%d", res);
    return 0;

}



