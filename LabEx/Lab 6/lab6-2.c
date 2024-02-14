#include <stdio.h>
int main (void) {
    int i,j;
    float temperature[5][2]={1.0,1.0,2.0,2.0,3.0,3.0,4.0,4.0,5.0,5.0};
    float sum[5]={0};
    float ave[5]={0};

    for (i=0; i<5; i++){

        for(j=0; j<2; j++){
            sum[i] = temperature[i][j] + temperature[i][j];
        }

        ave[i] = sum[i]/2;

        printf("Day %d sum=%5.2f avg=%5.2f\n",i+1,sum[i], ave[i]);
    }

    return 0;
}
