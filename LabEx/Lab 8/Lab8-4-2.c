#include <stdio.h>

int main()
{
    char c[5] = {'A','B','C','D','E'};
    char *q;
    int i;

    q = c;

    printf("%p   %d\n", q, *q);

    *q = -4;

    printf("%p   %d\n", q, *q);

    q = q + 3;

    printf("%p   %d\n", q, *q);

    *q = 0;

    printf("%p   %d\n", q, *q);

    printf("----------------------------\n");
    q = c;
    for (i=0;i<5;i++)
     printf("%p  %d\n", q+i, *(q+i));

    return 0;
}
