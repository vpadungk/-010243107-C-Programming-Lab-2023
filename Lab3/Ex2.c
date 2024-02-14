#include <stdio.h>
#include<math.h>

int main() {
    int x;
    printf("Enter age: ");
    scanf("%d", &x);
    if (x >= 65)
    {
        printf("Entrance fee: 0 Baht");
    } else {
        printf("Entrance fee: 100 Baht");
    }
    return 0;
}