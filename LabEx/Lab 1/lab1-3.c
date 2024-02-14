#include<stdio.h>

int main()
{
    int height;
    float weight;
    char bloodgroup;
    printf("Enter your height (cm):");
    scanf("%d",&height);
    printf("Enter your weight (kg):");
    scanf("%f",&weight);
    printf("Enter your blood group:");
    scanf("\n%c",&bloodgroup);

    printf("\n---------------------------\n");
    printf("Your height: %10d cm\n", height);
    printf("Your weight: %-10.2f kg\n", weight);
    printf("Your blood group: %5c", bloodgroup);



return 0;
}
