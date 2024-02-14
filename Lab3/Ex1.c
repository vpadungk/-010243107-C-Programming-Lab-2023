#include <stdio.h>
#include<math.h>

int main() {
    float x;
    printf("Insert value x: ");
    scanf("%f", &x);
    if (x < -2)
    {
        printf("%f",pow(x,2)+5);
    } else if (x >= -2)
    {
        printf("%f",2.5/pow(x,3));
    }
    return 0;
}