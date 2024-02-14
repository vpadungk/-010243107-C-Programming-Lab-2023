#include <stdio.h>
int main(void)
{
    printf("Test output values\n");
    printf("--------------Question 1--------------------------------------\n");
    printf("an integer  %d %d %d %d %d\n", 10+9, 10-9, 10*9, 10/9, 10%9);
    printf("--------------Question 2--------------------------------------\n");
    printf("a float     %.2f %.2f %.2f %.2f\n", 0.5+4.8, 0.5-4.8, 0.5*4.8, 0.5/4.8);
    printf("--------------Question 3--------------------------------------\n");
    printf("a character %c %c %c %c %c\n", 'a'+2,  'a'-2, 'a'*2, 'a'/2, 'a'%2 );
    return 0;
}
