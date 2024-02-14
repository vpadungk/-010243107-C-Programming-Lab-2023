#include <stdio.h>

int x = 2, y = 7, z = 4, result;

int main(){
    result = x * y - 20 % z;
    printf("Answer is %d", result);
    return 0;
}