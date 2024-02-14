#include <stdio.h>

int score[10] = {68, 79, 50, 92, 81, 44, 32, 18, 75, 88};
int max, min, i;

int main() {
    max = min = score[0];
    for (i = 1; i < sizeof(score) / sizeof(score[0]); i++) {
        if (score[i] > max) {
            max = score[i];
        } else if (score[i] < min) {
            min = score[i];
        }
    }
    printf("Max: %d Min: %d\n", max, min);
}
