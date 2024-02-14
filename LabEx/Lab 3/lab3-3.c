#include <stdio.h>
int main (void)
{
    float weight,height;
    printf("Please enter your weight (kg):");
    scanf("%f",&weight);
    printf("Please enter your height (cm):");
    scanf("%f",&height);

    //------ if ----------
    if(weight < height/2)
        printf("1.1 You are thin.\n");

    //------ if-else ----------
    if(weight < height/2)
        printf("2.1 You are thin.\n");
    else
        printf("2.2 Your are fat.\n");

    //------ else-if ----------
    if(weight < height/2)
        printf("3.1 You are thin.\n");
    else if(weight < 60)
        printf("3.2 ???????.\n");
    else
        printf("3.3 You are fat.\n");

    //------ nested if ----------
    if(weight < height/2)
    {
        if(weight < 60)
            printf("4.1 You are thin.\n");
        else
            printf("4.2 ???????\n");
    }
    else
    {
        printf("4.3 Your are fat.\n");
    }

}
