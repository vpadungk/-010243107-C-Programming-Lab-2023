#include<stdio.h>

int main(void)
{
    typedef struct {
        int n; //numerator
        int d; //denominator
    } fraction;

    fraction a, b, c;

    printf("Enter a:");
    scanf("%d/%d",&a.n,&a.d);

    printf("Enter b:");
    scanf("%d/%d",&b.n,&b.d);

    c.d = a.d*b.d;
    c.n = (b.d*a.n)+(a.d*b.n);

    printf("a + b = %d/%d.\n",c.n,c.d);
    return 0;
}
