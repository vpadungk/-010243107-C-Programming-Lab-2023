#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[15] = "";        // Initial value of a
    char a1[15];
    char a2[15];
    char b[8]  = "mytext";
    int  n = 4;

    strcpy(a1,a);

    strcat(a1,b);

    strcpy(a2,a);

    strncat(a2,b,n);


    return 0;
}

