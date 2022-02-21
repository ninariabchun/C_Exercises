#include <stdio.h>                              //include to use standard output
#include <string.h>                             //include to use strlen and strcpy
#include <stdlib.h>                             //include to use malloc

char* my_strdup(char* param_1) {                //function .. of type string array takes parameter string

    char *dst = malloc(strlen (param_1) + 1);  // declare pointer of type char, initialize it to malloc'd string plus '\0' character
    if (dst == NULL)                            //if statement to check condition if pointer equals 0
    return NULL;                                //return 0
    strcpy(dst, param_1);                       //copy thr string
    return dst;                                 //return the copied string
}

int main() {                                     //main function

    char s[] = "check";                           //declare and initialize string
    char res[20];                                 //declare a new string res with size of 20
    strcpy(res, my_strdup(s));                    //copy the old string ot a new one whilke calling the function my_strdup
    printf("%s", res);                            //print out the string
    return 0;

}