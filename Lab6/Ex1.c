#include <stdio.h>

float temp[2][5]={{27.6,28.9,30.4,29.7,28.1},
                  {28.1,29.3,31.7,30.8,28.9}};
float avge=0;
int i,j;
int row = sizeof(temp)/sizeof(temp[0]);
int column = sizeof(temp[0])/sizeof(temp[0][0]);

float Avge(float Sheet[][5], int row, int column){
    float sum=0;
    int count=0;
    for (int i = row-1; i < row; i++){
        for (int j = 0; j < column; j++){
            // printf("%f %f\n",sum,Sheet[i][j]);
            sum = sum + Sheet[i][j];
            count++;
        }
    }
    // printf("%f %d\n", sum, count);
    avge = (float)sum/count;
    count = 0;
    return avge;
}

int main(){
    printf("column = %d, row = %d\n", column, row);
    printf("Average [Day] = %.2f\n", Avge(temp, 1, column));
    printf("Average [Night] = %.2f", Avge(temp, 2, column));
}
