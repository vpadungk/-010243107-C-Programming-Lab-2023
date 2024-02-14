#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

float r,area;

int main(){
    printf("INSERT R: ");
    scanf("%f",&r);
    area = M_PI * r * r;
    printf("%f\n",r);
    printf("%f",area);
}