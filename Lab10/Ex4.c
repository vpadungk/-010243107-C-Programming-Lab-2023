#include <stdio.h>
#define M_PI (3.141592653589793)

void calCylinderVol(float r, float h, float *v){
    *v = M_PI * r * r * h ;
}

int main(){
    float Radiun = 1, Heigh = 1, Volumn;
    calCylinderVol(Radiun,Heigh,&Volumn);
    printf("Volumn of Cylender (R: %f, D: %f): %f",Radiun,Heigh,Volumn);
}