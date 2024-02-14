#include <stdio.h>
float Temp[] = {29.5, 30.7, 30.1, 29.2, 30.9};
int lenght = sizeof(Temp)/sizeof(Temp[0]);
int i;

float calAverageTemp(float t[]){
    float SumFunction = 0, Avge;
    for (i = 0; i < lenght; i++){
        SumFunction = SumFunction + t[i];
    }
    Avge = SumFunction/lenght;
    return Avge;
}

int main(){
    printf("lenght: %d\nAverage temp: %f",lenght,calAverageTemp(Temp));
}