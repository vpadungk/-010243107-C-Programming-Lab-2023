#include <stdio.h>

const int length = 5;
float temp[] = {29.5, 30.7, 30.1, 29.2, 30.9};
float *ptr  = temp;
int i;

void PrintList(float list[], int length){
    for (i = 0; i < length; i++){
        printf("%.1f\n",list[i]);
    }
}

void AddressListIndex(float list[],int length){
    for (i = 0; i < length; i++){
        printf("temp[%d]: %p\n",i,list[i]);
    }
}

int main(){
    *ptr = 29.0;
    *(ptr + 2) = 30.0;
    ptr = &temp[4];
    *(ptr - 1) = 29.3;
    PrintList(temp,length);
    printf("Pointer value: %.1f\n", *ptr);
    printf("Adress\n");
    printf("temp[]: %p\n",temp);
    AddressListIndex(temp,length);
    printf("ptr: %p",&ptr);
}