#include <stdio.h>
#include <string.h>

#define MAXLENGHT 50

char Name[2][MAXLENGHT];
char User[MAXLENGHT];
int i, j;
int count = 0, row = 0;
int countUpper = 0, countLower = 0;

void StringToMatrix(char str[],char matrix[][MAXLENGHT]){
    for (i = 0; User[i] != '\0'; i++) {
        if (str[i] != ' ') {
            matrix[row][count] = str[i];
            count++;
        } else if (str[i] == ' ') {
            row++;
            count = 0;
        }
    }
}

void CountLetterMatrix(char matrix[][MAXLENGHT]){
    for (i = 0; i < 2; i++) {
        for (j = 0; matrix[i][j] != '\0'; j++) {
            if (matrix[i][j] >= 'A' && matrix[i][j] <= 'Z') {
                countUpper++;
            } else if (matrix[i][j] >= 'a' && matrix[i][j] <= 'z') {
                countLower++;
            }
        }
    }
}

int main() {
    printf("Enter Name: ");
    fgets(User, sizeof(User), stdin);
    User[strcspn(User, "\n")] = '\0';

    StringToMatrix(User,Name);
    CountLetterMatrix(Name);

    printf("Number of 'A' characters: %d\n", countUpper);
    printf("Number of 'a' characters: %d\n", countLower);
}