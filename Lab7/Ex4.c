#include <stdio.h>
#include <string.h>

char String1[] = "King";
char String2[] = "Mongkut";

char CombineStr[20];

int main() {
    strcpy(CombineStr, String1);
    strcat(CombineStr, " ");
    strcat(CombineStr, String2);

    printf("String1[%s] + String2[%s]: %s\n", String1, String2, CombineStr);
    printf("Compare String1[%s] to String2[%s]: %d (%d)\n", String1, String2, strcmp(String1,String2) == 0, strcmp(String1,String2));
    printf("Copy String1[%s] to String2[%s]: %s\n", String1, String2, strcpy(String2,String1));
}