#include <stdio.h>
int main(void)
{
    typedef int WEEKS;

    WEEKS day;
    WEEKS holiday_1 = 5;
    WEEKS holiday_2 = holiday_1 + 1;

    printf("Enter number for a day (0=MON..6=SUN):");
    scanf("%d",&day);


    if (day==holiday_1 || day==holiday_2)
        printf("Holiday\n");
    else
        printf("Working day\n");

    return 0;
}
