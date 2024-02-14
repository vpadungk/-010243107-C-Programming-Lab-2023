#include <stdio.h>
int main(void) {
    int x = 5;
    int y = 1;
    int z = 0;
    printf("----------Question 1 -------------\n");
    printf("2.1 %d\n", y && 0);
    printf("2.2 %d\n", y && 1);
    printf("2.3 %d\n", y || 0);
    printf("2.4 %d\n", y || 1);
    printf("2.5 %d\n", y && z);
    printf("2.6 %d\n", y || z);
    printf("2.7 %d\n", !y);

    printf("----------Question 2-------------\n");
	printf("2.8  (x > y) && (2 == 3)    is %d\n", (x > y) && (2 == 3));
	printf("2.9  (4 <= 1) && !(x > y)   is %d\n", (4 <= 1) && !(x > y));
    printf("2.10 !((x > y) || (2 == 3)) is %d\n",!((x > y) || (2 == 3)));


  return 0;
}

