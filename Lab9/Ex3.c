#include <stdio.h>
#include <stdlib.h>

char grading(int score){
    if (score > 100 || score < 0) {
        return 'I';
    } else if (score >= 85) {
        return 'A';
    } else if (score >= 70) {
        return 'B';
    } else if (score >= 55) {
        return 'C';
    } else {
        return 'F';
    }
}

int main(){
    printf("%c\n",grading(101));
    printf("%c\n",grading(rand() % 16 + 85));
    printf("%c\n",grading(rand() % 15 + 70));
    printf("%c\n",grading(rand() % 10 + 55));
    printf("%c\n",grading(rand() % 55));
    printf("%c\n",grading(-1));
}