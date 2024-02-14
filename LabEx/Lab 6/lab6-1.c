#include <stdio.h>
int main (void) {
    //Local declaration
    int A[3][3] = {{7,-3,1},
                   {1,-1,3},
                   {1,2,0}};
                //Initial value of A
    int B[3][3] = {1,0,1,2,-1,3,0,2,1};
    int C[3][3];
    int i, j,temp;

    //Calculate C=A+B
    C[0][0] = A[0][0]+B[0][0];
    C[0][1] = A[0][1]+B[0][1];
    C[0][2] = A[0][2]+B[0][2];
    C[1][0] = A[1][0]+B[1][0];
    C[1][1] = A[1][1]+B[1][1];
    C[1][2] = A[1][2]+B[1][2];
    C[2][0] = A[2][0]+B[2][0];
    C[2][1] = A[2][1]+B[2][1];
    C[2][2] = A[2][2]+B[2][2];


    printf("\n-------C--------\n");
    printf("%4d%4d%4d\n",C[0][0],C[0][1],C[0][2]);
    printf("%4d%4d%4d\n",C[1][0],C[1][1],C[1][2]);
    printf("%4d%4d%4d\n",C[2][0],C[2][1],C[2][2]);


   C[2][2] = A[0][1]*B[1][2];   //statement


    printf("\n-------C after statement --------\n");
    for (i=0; i< 3; i++) {
        for (j=0; j< 3; j++)
            printf ("%4d", C[i][j]);
        printf(" \n");
    }
    return 0;
}
