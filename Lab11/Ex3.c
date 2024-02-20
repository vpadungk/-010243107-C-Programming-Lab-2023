#include <stdio.h>

struct Student{
    char Name[50];
    long long int ID;
    int Age;
    char Department[100];
};

void getUserInput(struct Student *s) {
    printf("Enter student name: ");
    scanf("%s", &s->Name);
    printf("Enter student ID: ");
    scanf("%lld", &s->ID);
    printf("Enter student age: ");
    scanf("%d", &s->Age);
    printf("Enter student department: ");
    scanf("%s", &s->Department);
    printf("\n");
}

int main(){
    struct Student Std[5];
    for (int i = 0; i < 5; i++) {
        getUserInput(&Std[i]);
    }

    printf("Student Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, ID: %lld, Age: %d, Department: %s\n", Std[i].Name, Std[i].ID, Std[i].Age, Std[i].Department);
    }
    return 0;
}