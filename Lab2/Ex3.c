#include <stdio.h>

float a,b,c;
float result;
int test;

int main(){
    float a=1,b=1,c=1; //use for testing
    // printf("Enter value of a b and c: ");
    // scanf("%f %f %f", &a, &b, &c); // For user input
    result = ((4.2*a)+(2.8*b))/(((5*b)/a)-(7*c));
    printf("%f\n",result);
    test = (result == -3.5);

    //return output in True or False
    switch (test) {
        case 1:
            printf("True");
            break;
        case 0:
            printf("False");
            break;
    }
    return 0;
}