#include <stdio.h>

int ages[] = {19, 18, 20, 17, 22, 23, 21, 18};

float avge(int list[], int length) {
    int sum = 0, i;
    float average = 0;

    for (i = 0; i < length; i++) {
        sum = sum + list[i];
    }

    average = (float)sum / length;
    return average;
}

int main() {
    printf("%f", avge(ages, sizeof(ages) / sizeof(ages[0])));
    return 0;
}
