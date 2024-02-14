#include <stdio.h>

#define row 3
#define column 3

int matrix1[row][column] = {};
int matrix2[row][column] = {};
int result[row][column] = {};
int i, j;

void UserInputMatrix(int matrix[row][column]) {
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            printf("Enter value: ");
            scanf("%d", &matrix[i][j]);
        }
    }
}

void MatrixOutput(int matrix[row][column]) {
    printf("[");
    for (i = 0; i < row; i++) {
        printf("[");
        for (j = 0; j < column; j++) {
            printf("%d", matrix[i][j]);
            if (j < column - 1) {
                printf(",");
            }
        }
        printf("]");
        if (i < row - 1) {
            printf("\n");
        }
    }
    printf("]");
}

void AddMatrix(int matrix1[row][column], int matrix2[row][column], int result[row][column]) {
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    printf("Enter values for matrix1:\n");
    UserInputMatrix(matrix1);
    printf("Enter values for matrix2:\n");
    UserInputMatrix(matrix2);

    printf("\nMatrix1:\n");
    MatrixOutput(matrix1);
    printf("\nMatrix2:\n");
    MatrixOutput(matrix2);

    AddMatrix(matrix1, matrix2, result);

    printf("\nSum of the matrices:\n");
    MatrixOutput(result);

    return 0;
}
