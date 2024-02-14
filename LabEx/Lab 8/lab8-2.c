#include <stdio.h>

int main()
{

    int x, *px;

    x = 3;
    px = &x;

    printf("%p  %p\n",  &x, &px);
    printf("%8d  %p\n",  x,  px);
    printf("%8d",           *px);

    return 0;
}

