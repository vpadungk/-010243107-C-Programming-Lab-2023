#include <stdio.h>
int main (void) {
    int data[5] = {0};  // initial value
    int i, last = 5;    // variable 'last'
    int temp;

    printf("%2d %2d %2d %2d %2d",data[0],data[1],data[2],data[3],data[4]);

    printf(" |");

    ;  // statement

    for (i=0; i< last; i++)
        printf ("%2d ",data[i]);

    return 0;
}
