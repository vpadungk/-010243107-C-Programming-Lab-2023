#include <stdio.h>

int current=0,input,i;
int x[10] = {1,2,3,4,5,-2,-3,6,-4,0};

int main() {
    for (i = 0; i <= 9; i++) {
        input = x[i];
        do {
            current += input;
            input = x[++i];
        } while (input != 0);
    }
    printf("%d",current==12);
}