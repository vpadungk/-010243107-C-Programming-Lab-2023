#include <stdio.h>
int main(void)
{
    enum WEEKS {MON, TUE, WED, THU, FRI, SAT, SUN};
    enum WEEKS holiday1=5;
    enum WEEKS day;

    printf("Enter number for a day (0=MON..6=SUN):");
    scanf("%d",&day);


    printf("\n%d %d\n\n", day,holiday1);


    if (day==holiday1||day==SUN)
        printf("Holiday\n");
    else
        printf("Working day\n");

    return 0;
}
