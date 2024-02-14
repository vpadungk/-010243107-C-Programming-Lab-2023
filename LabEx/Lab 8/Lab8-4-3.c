#include <stdio.h>

int main()
{
    int y[2][5] = {{-1,-2,-3,-4,-5}, {1,2,3,4,5}};
    int *p,*q;
    int i;

    p = y[0];
    for (i=0;i<5;i++)
        printf("%p  %d\n", p+i, *(p+i));

    q = y[1];
    for (i=0;i<5;i++)
        printf("%p  %d\n", q+i, *(q+i));

    return 0;
}
