#include <stdio.h>
#define MAXLENGHT 50

char Std[3][3][MAXLENGHT];
int plane = sizeof(Std)/sizeof(Std[0]);
int row = sizeof(Std[0])/sizeof(Std[0][0]);
int column = sizeof(Std[0][0])/sizeof(Std[0][0][0]);
int i,j,k;

void UserInputMatrix(char matrix[plane][row][column]) {
    for (i = 0; i < plane; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter student name: ");
        scanf("%s", matrix[i][0]);
        printf("Enter student surname: ");
        scanf("%s", matrix[i][1]);
        printf("Enter student ID: ");
        scanf("%s", matrix[i][2]);
    }
}

void StdOutput(char matrix[plane][row][column]){
    for (i = 0; i < plane; i++) {
        printf("\nDetails for student %d:\n", i + 1);
        printf("Name: %s\n", matrix[i][0]);
        printf("Surname: %s\n", matrix[i][1]);
        printf("ID: %s\n", matrix[i][2]);
    }
}

int main(){
    UserInputMatrix(Std);
    StdOutput(Std);
}