#include <stdio.h> 

int my_strlen(const char *s) {                  
    int len = 0;                                
    if (s != NULL) {                            
        while (*s != '\0') {                    
            len++;                              
            s++;                                
        } 
    }
return len;                                     
}

int main(int argc, char* argv[]) {              

        int res;                                
        res = my_strlen(argv[1]);              
        printf("%d", res);                      
        return 0;                               
}   