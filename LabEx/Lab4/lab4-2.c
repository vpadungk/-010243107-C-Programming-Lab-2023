#include<stdio.h>

int main(void)
{
	int i;
	int count = 0;
    int sum = 0;
	for(i=10;i>=0;i--)
    {
        printf("Hello %d\n",i);
        count++;
        sum = sum+i;
    }
    printf("%d %f", count, (float)(sum/count));

	return 0;
}
