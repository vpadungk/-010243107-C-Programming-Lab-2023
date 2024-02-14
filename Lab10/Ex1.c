#include <stdio.h>
float Temp[] = {29.5, 30.7, 30.1, 29.2, 30.9};
int lenght = sizeof(Temp)/sizeof(Temp[0]);
int i;

void IsTempHigh(float temperature){
    if (temperature >= 30){
        printf("Temp: %.1f is High\n",temperature);
    } else {
        printf("Temp: %.1f is not High\n",temperature);
    }
}

int main(){
    for (i = 0; i < lenght; i++){
        IsTempHigh(Temp[i]);
    }
}