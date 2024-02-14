#include <stdio.h>

int count=0;
int sum,i;
float avg;

int main(){
    for (i=101;i<=120;i++)
    {
        sum += i;
        count++;
    }
    avg = sum/count;
    printf("%d",sum==2210&&avg==110);
}