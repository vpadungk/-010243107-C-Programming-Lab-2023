#include <stdio.h>
#include <string.h>

char Fname[50],Sname[50],ID[14],Department[],Gender[2],Age[3];

const char *DepartmentCheck(char ID[]) {
    static char DepartmentCode[4];
    for (int i = 0; i < 3; ++i) {
        DepartmentCode[i] = ID[i + 5];
    }
    DepartmentCode[3] = '\0';

    if (strcmp(DepartmentCode, "236") == 0) {
        return "Production and Robotic Engineering";
    } else {
        return "Unknown Department";
    }
}


int main(){
    printf("Name & ID: ");
    scanf("%s %s %14s", Fname, Sname, ID);
    const *Department = DepartmentCheck(ID);
    printf("Gender [M/F] & Age: ");
    scanf("%s %s", Gender, Age);
    printf("Name: %s\nSurname: %s\nID: %s\nDepartment: %s\nGender: %s\nAge: %s", Fname, Sname, ID, Department, Gender, Age);
}