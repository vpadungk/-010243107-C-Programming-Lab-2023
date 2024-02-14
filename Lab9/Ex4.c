#include <stdio.h>

float getWeight(){
    float weight;
    scanf("%f", &weight);
    return weight;
}

int main(){
    printf("%.2f",getWeight());
}