#include <stdio.h>

int a = 5;

int myfunc(int b, int c);

int main(void)
{
    int x = 10;
    int y;

    printf("1. %2d %2d\n", a, x);

    y = myfunc(x, 2);

    printf("3. %2d %2d %2d\n", a, x, y);

}

int myfunc(int b, int c)
{
    a = a + 1;
    b = 3;
    c = a - b;
    printf("2. %2d %2d %2d\n", a, b, c);

    return c;
}

