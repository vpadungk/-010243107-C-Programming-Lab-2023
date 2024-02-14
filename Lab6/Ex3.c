#include <stdio.h>

int ScoreSheet[3][5]={{20,15,30,2,0},
                      {25,10,20,10,2},
                      {15,20,10,5,3}};
char *Grade[5] = {"A","B","C","D","F"};
int TotalScoreGrade[5]={};
int i,j;
int row = sizeof(ScoreSheet)/sizeof(ScoreSheet[0]);
int column = sizeof(ScoreSheet[0])/sizeof(ScoreSheet[0][0]);

void ScoreOutput(char *Grade[], int Sheet[], int lenght){
    for (i = 0; i < lenght; i++){
        printf("Grade %s: %d\n", Grade[i], Sheet[i]);
    }
}

int ScoreCount(int RawSheet[][5], int Sheet[], int column, int row){
    for (i = 0; i < row; i++){
        for (j = 0; j < column; j++){
            Sheet[j] = Sheet[j]+RawSheet[i][j];
        }
    }
}

int main(){
    ScoreCount(ScoreSheet,TotalScoreGrade,column,row);
    ScoreOutput(Grade,TotalScoreGrade,column);
}
