#include <stdio.h>
int main(void)
{

    printf("--------------Question 1--------------------------------------\n");
    printf("Test output values\n");
    printf("an integer  :%d %d %d %d\n", 10,   -8, 0.5, 'a');
    printf("a float     :%f %f %f %f\n", 9.5,1.54,   7, 'd');
    printf("a character :%c %c %c %c\n", 'b', 'c',  70, 2.5);
    printf("--------------Question 2--------------------------------------\n");
    printf("%d\n", -71);
    printf("%5d\n", -71);
    printf("%d\n", 8800);
    printf("%5d\n", 8800);
    printf("%d\n", 123);
    printf("%5d\n", 123);
    printf("--------------Question 3--------------------------------------\n");
    printf("%f\n", 1.23456);
    printf("%.4f\n", 1.23456);
    printf("--------------Question 4 --------------------------------\n");
    printf("%5.2f\n", 2.58321);
    printf("%5.2f\n", 2.5);

    printf("%10.3f\n", -9.6357);
    printf("%10.3f\n", -9.6);
    printf("--------------Question 5--------------------------------\n");
    printf("%17.4f\n", -8.05715557);
    printf("%-17.4f\n", -8.05715557);

    return 0;
}
