#include <stdio.h>
#include <string.h>
#include <math.h>
#define PI 3.1428

int main (void)
{
    char text[100] = "Function in standard C library:";

    printf("%s\n\n", strcat(text, "Math.h"));

    printf("sin(PI/4) = %f\n", sin(PI/4));
    printf("cos(PI/4) = %f\n", cos(PI/4));
    printf("tan(PI/4) = %f\n", tan(PI/4));

}
