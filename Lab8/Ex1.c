#include <stdio.h>

int age = 19;
int *pointer;

int main(){
    pointer = &age;
    printf("Age (in age): %d\nAge (in pointer): %d\nAddress age: %p\nCompare adress between variable and pointer: %d",age,*pointer,pointer, &age==pointer);
}