#include <stdio.h>                                                               

void my_string_formatting(char* param_1, char* param_2, int param_3) {           

    printf("Hello, my name is %s %s, I'm %d.\n", param_1, param_2, param_3);     
}


int main() {                                                                     

    char s1[] = "James";                                                         
    char s2[] = "Johnson";                                                       
    int  s3   = 87;                                                              

    my_string_formatting(s1, s2, s3);                                            

    return 0;                                                                    
}