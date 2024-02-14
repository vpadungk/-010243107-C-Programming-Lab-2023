#include <stdio.h>

void calAreaTriangle(float width, float height){
    float area = 0.5*width*height;
    printf("%f",area);
}

int main(){
    calAreaTriangle(1,1);
}