#include <stdio.h>

typedef struct {
int n;
int d;
} fraction;

fraction SumFraction(fraction f1, fraction f2){
    fraction result;
    result.n = (f1.n * f2.d) + (f1.d * f2.n);
    result.d = f1.d * f2.d;
    return result;
}

int main(){
    fraction f1 = {1,2};
    fraction f2 = {1,3};
    fraction Sum = SumFraction(f1, f2);
    printf("Result of sum: %d/%d\n", Sum.n, Sum.d);
    return 0;
}