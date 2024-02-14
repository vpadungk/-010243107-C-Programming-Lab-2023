#include <stdio.h>
#include <stdlib.h>

//score cal function
const char* ScoreCal(int score){
    if (score > 100 || score < 0) {
        return "Invalid";
    } else if (score >= 85) {
        return "A";
    } else if (score >= 70) {
        return "B";
    } else if (score >= 55) {
        return "C";
    } else {
        return "F";
    }
}

//test function
void Test(){
    printf("%d",ScoreCal(101)=="Invalid");
    printf("%d",ScoreCal(rand() % 16 + 85)=="A");
    printf("%d",ScoreCal(rand() % 15 + 70)=="B");
    printf("%d",ScoreCal(rand() % 10 + 55)=="C");
    printf("%d",ScoreCal(rand() % 55)=="F");
    printf("%d",ScoreCal(-1)=="Invalid");
}

int main() {
    Test();
}