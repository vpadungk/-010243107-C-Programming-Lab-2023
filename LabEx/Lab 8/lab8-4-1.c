#include <stdio.h>

int main()
{
    int x[5] = {1,2,3,4,5};
    int *p;

    p = x;

    printf("%p  %d\n", p, *p);


    p = &x[0];

    printf("%p  %d\n", p, *p);

    return 0;
}
