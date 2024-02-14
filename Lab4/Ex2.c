#include <stdio.h>

int current=0,input;

int main(){
    do
    {
        printf("Insert No. people:");
        scanf("%d",&input);
        current += input;
        printf("Sum of numbers: %d\n", current);
    } while (input != 0);
    
}