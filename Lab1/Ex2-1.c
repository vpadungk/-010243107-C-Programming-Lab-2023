#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main(){
    float r = 20;
    float area;
    area = M_PI*r*r;
    printf("%.6f\n",r);
    printf("%.6f",area);
    return 0;
}