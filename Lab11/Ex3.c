#include <stdio.h>
#include <string.h>

struct Student{
    char Name[50];
    long long int ID;
    int Age;
    char Department[100];
};

char Names[][50] = {"STD01","STD02","STD03","STD04","STD05"};
long long int IDs[] = {6601023610001,6601023610002,6601023610003,6601023610004,6601023610005};
int Ages[] = {18,19,20,21,22};
char Departments[][50] = {"PRE","IEE","CPrE","ME","CHE"};

int main(){
    struct Student S[5];
    for (int i = 0; i < 5; i++) {
        strcpy(S[i].Name, Names[i]);
        S[i].ID = IDs[i];
        S[i].Age = Ages[i];
        strcpy(S[i].Department, Departments[i]);
    }

    printf("Student Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, ID: %lld, Age: %d, Department: %s\n", S[i].Name, S[i].ID, S[i].Age, S[i].Department);
    }
    return 0;
}