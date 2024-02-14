#include <stdio.h>
int main(void)
{

    printf("--------------Question 1--------------------------------------\n");
    printf("Test output values\n");
    printf("an integer  :%d %d %d %d\n", 10,   -8, 0.5, 'a');//Ans: 10 -8 0 97
    printf("a float     :%f %f %f %f\n", 9.5,1.54,   7, 'd');//Ans:9.500000 1.540000 0.000000 0.000000
    printf("a character :%c %c %c %c\n", 'b', 'c',  70, 2.5);//Ans:b c F
    printf("--------------Question 2--------------------------------------\n");
    printf("%d\n", -71);
    printf("%5d\n", -71);
    printf("%d\n", 8800);
    printf("%5d\n", 8800);
    printf("%d\n", 123);
    printf("%5d\n", 123);
    //Ans: The effect of n (5) is the output of int in n width.
    printf("--------------Question 3--------------------------------------\n");
    printf("%f\n", 1.23456);
    printf("%.4f\n", 1.23454);
    //Ans: The effect of %.4f is use only 4 digits of float and round the last digit.
    printf("--------------Question 4 --------------------------------\n");
    printf("%5.2f\n", 2.58321);
    printf("%5.2f\n", 2.5);

    printf("%10.3f\n", -9.6357);
    printf("%10.3f\n", -9.6);
    //Ans: The effect between n [10] and m [.3] is the n is output a floating-point of n width. The m is how many digits of float.
    printf("--------------Question 5--------------------------------\n");
    printf("%17.4f\n", -8.05715557);
    printf("%-17.4f\n", -8.05715557);
    //Ans: The effect on - and + is what place to place the space. In (-) is place on the left (after the float).
    return 0;
}