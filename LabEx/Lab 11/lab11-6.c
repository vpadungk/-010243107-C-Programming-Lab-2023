#include <stdio.h>
int main(void)
{
    typedef struct
    {
        char name[15];
        float score;
    } student;
    float avg_score;

    student std[3] = {  {},
                        {},
                        {"Saksri", 70.0}
    };

    printf("Enter name: ");
    scanf("%s", std[0].name);
    printf("Enter score:");
    scanf("%f", &std[0].score);

    printf("Enter name: ");
    scanf("%s", std[1].name);
    printf("Enter score:");
    scanf("%f", &std[1].score);

    avg_score = (std[0].score+std[1].score+std[2].score)/3;

    printf("Avg score = %.1f\n", avg_score);

    return 0;
}
