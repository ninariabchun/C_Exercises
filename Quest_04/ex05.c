#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* my_spaceship(char* param_1) {

    int  x           = 0;
    int  y           = 0;
    char direction[10] = "up";
    
    char* buff = (char*)malloc(100);

    int   len  = strlen(param_1);

    for(int i = 0; i < len; i++) {

        if(strcmp(direction, "up") == 0) {
            if(param_1[i] == 'R') {
                strcpy(direction, "right");
            }
            if(param_1[i] == 'L') {
                strcpy(direction, "left");
            }
            if(param_1[i] == 'A') {
                y--;
            }
           continue;
        }

        if(strcmp(direction, "right") == 0) {
            if(param_1[i] == 'R') {
                strcpy(direction, "down");
            }
            if(param_1[i] == 'L') {
                strcpy(direction, "up");
            }
            if(param_1[i] == 'A') {
                x++;
            }
            continue;
        }

        if(strcmp(direction, "left") == 0) {
            if(param_1[i] == 'R') {
                strcpy(direction, "up");
            }
            if(param_1[i] == 'L') {
                strcpy(direction, "down");
            }
            if(param_1[i] == 'A') {
                x--;
            }
            continue;
        }

        if(strcmp(direction, "down") == 0) {
            if(param_1[i] == 'R') {
                strcpy(direction, "left");
            }
            if(param_1[i] == 'L') {
                strcpy(direction, "right");
            }
            if(param_1[i] == 'A') {
                y++;
            }
            continue;
        }
        

    }
   
    snprintf(buff, 50, "{x: %d, y: %d, direction: '%s'}", x, y, direction); 
    return buff;
    
}

int main(int argc, char* argv[]) {

    if(argc == 2) {
        char str[20];
        strcpy(str, argv[1]);
        my_spaceship(str);
    }
}