#include <stdio.h>

void calArea(int l)
{
    printf("Length %3d Area %4d\n",l,l*l);
}

void calVol(int l[], int size)
{
    int i;
    for(i=0; i<size; i++)
        printf("Length %3d Vol  %4d\n", l[i], l[i]*l[i]*l[i]);
}

float calAverage(int l[], int size)
{
    int i;
    float sum=0;
    for(i=0; i<size; i++)
        sum = sum + l[i];
    return sum/size;
}


int main(void)
{
    int len[5] = {2,3,5,8,10};
    float x=0;

    ; // Statement

    printf("%f", x);

 }
