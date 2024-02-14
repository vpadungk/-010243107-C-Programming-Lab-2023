#include<stdio.h>

int increment(int *p, int q, int r)
{
    // Pass by reference
	*p = *p + 10;

    // Pass by value
	q = q + 2;

	// Pass by value
	return r + 1;
}

int main(void)
{
    int a=0,b=5,c=3;

    printf("%d  %d  %d\n", a, b, c);

    increment(&a, 0, 0);

    printf("%d  %d  %d\n", a, b, c);

    c = increment(&a, 0, 0);

    printf("%d  %d  %d", a, b, c);
}
