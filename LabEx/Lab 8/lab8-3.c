#include <stdio.h>

int main()
{
    //Declaration
    int a,b,c;
    int *p,*q,*r;

    //Initial value of data
    a=0;
    b=0;
    c=0;

    //Initial value of pointers
    p = &a;
    q = &b;
    r = &c;

    //Statement
a = 8;
b = 3;
c = 7;
q = p;
r = q;
*p = *&b;











    printf("-----------Address----------\n");
    printf("%p  %p  %p\n", &a, &b, &c);
    printf("%p  %p  %p\n", p, q, r);

    printf("\n-----------Value------------\n");
    printf("%8d  %8d  %8d\n", a, b, c);
    printf("%8d  %8d  %8d\n", *p,*q,*r);

    return 0;
}

