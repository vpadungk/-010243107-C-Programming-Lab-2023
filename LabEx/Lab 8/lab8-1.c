#include <stdio.h>

int main()
{

    int x, y;

    x = 3;

    printf("1. %p  %p  %d  %d\n", &x, &y, x, y);

    y = 5;

    printf("2. %p  %p  %d  %d\n", &x, &y, x, y);

    x = y-1;

    printf("3. %p  %p  %d  %d\n", &x, &y, x, y);

    y = x*2;

    printf("4. %p  %p  %d  %d\n", &x, &y, x, y);

    return 0;
}

