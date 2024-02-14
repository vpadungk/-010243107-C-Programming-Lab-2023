#include <stdio.h>
#include<math.h>

int main() {
    int x;
    printf("Score: ");
    scanf("%d", &x);
    if (x > 100 || x < 0) {
        printf("Invalid");
    } else if (x >= 85) {
        printf("A");
    } else if (x >= 70) {
        printf("B");
    } else if (x >= 55) {
        printf("C");
    } else {
        printf("F");
    }
    return 0;
}