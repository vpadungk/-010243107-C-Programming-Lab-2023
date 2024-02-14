#include <stdio.h>

int count=0;
int sum,i;
float avg;

int main(){
    for (i=101;i<=120;i++)
    {
        printf("i=%d\n",i);
        sum += i;
        count++;
    }
    avg = sum/count;
    printf("Sum=%d Avg=%f",sum, avg);
}