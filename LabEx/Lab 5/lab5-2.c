#include <stdio.h>
int main (void) {
    int i;
    float ary[5];
    float sum=0, ave,min,max;

    for (i=0; i<5; i++){
        printf("Enter Temperature of Day %d :", i+1);
        scanf ("%f", &ary[ i ]);
        sum = sum + ary[ i ];
        if(i == 0)
        {
            min = ary[0];
            max = ary[0];
        }
        else
        {
            if(ary[i] < min)
                min = ary[i];
            if(ary[i] > max)
                max = ary[i];
        }

    }
    ave = sum/5;
    printf("%.2f %.2f %.2f %.2f",sum, ave,min,max);
    return 0;
}
