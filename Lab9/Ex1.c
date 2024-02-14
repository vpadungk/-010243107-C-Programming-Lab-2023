#include <stdio.h>
int i;
int width = 24, height = 4;

void drawBox(){
    //Top part
    for (int i = 0; i < width; i++) {
        printf("*");
    }
    printf("\n");
    
    //Middle part
    for (int i = 0; i < height - 2; i++) {
        printf("*");
        for (int j = 0; j < width - 2; j++) {
            printf(" ");
        }
        printf("*\n");
    }
    
    //Bottom part
    for (int i = 0; i < width; i++) {
        printf("*");
    }
    printf("\n");
}

void main(){
    for (i = 0; i < 3; i++){
        drawBox();
    }
}