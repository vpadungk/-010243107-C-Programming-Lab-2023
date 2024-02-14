#include<stdio.h>

typedef struct {
        int n;
        int d;
} fraction;

fraction sum(fraction x, fraction y);
void show(fraction x);

int main(void)
{
    fraction a, b, c;

    printf("Enter a:");
    scanf("%d/%d",&a.n,&a.d);

    printf("Enter b:");
    scanf("%d/%d",&b.n,&b.d);

    c=sum(a,b);
    show(c);

    return 0;
}

fraction sum(fraction x, fraction y)
{
    fraction z;
    z.d=x.d*y.d;
    z.n=(y.d*x.n)+(x.d*y.n);
    return z;
}
void show(fraction x)
{
    printf("a + b = %d/%d.\n",x.n,x.d);
    return;
}
