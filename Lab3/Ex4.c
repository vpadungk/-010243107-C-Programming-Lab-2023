#include <stdio.h>
#include <math.h>

int main() {
    int x;
    printf("Weight: ");
    scanf("%d", &x);
    switch (x){
    case 0 ... 100:
        printf("Tiny");
        break;
    case 101 ... 200:
        printf("Small");
        break;
    case 201 ... 300:
        printf("Medium");
        break;
    case 301 ... 400:
        printf("Large");
        break;
    case 401 ... 500:
        printf("Extra large");
        break;
    }
    return 0;
}