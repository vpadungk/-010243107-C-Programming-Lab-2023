#include <stdio.h>

float temp[5] = {27.6,28.9,30.4,29.7,28.1};
char *day[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
int i;

int main(){
    for (i = 0; i <= sizeof(temp)/sizeof(temp[0]); i++){
        if (temp[i] > 28){
            printf("%s\n",day[i]);
        } 
    }
}