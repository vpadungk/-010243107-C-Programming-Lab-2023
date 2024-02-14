#include <stdio.h>
int main(void)
{
    enum WEEKS {MON, TUE, WED, THU, FRI, SAT, SUN};
    enum Weeks {Mon=1, Tue, Wed, Thu, Fri, Sat, Sun};

    printf("%d  %d\n", MON, Mon);
    printf("%d  %d\n", TUE, Tue);
    printf("%d  %d\n", WED, Wed);
    printf("%d  %d\n", THU, Thu);
    printf("%d  %d\n", FRI, Fri);
    printf("%d  %d\n\n", SAT, Sat);
    printf("%d  %d", SUN+1, Sun);

    return 0;
}
