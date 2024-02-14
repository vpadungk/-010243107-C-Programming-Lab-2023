#include <stdio.h>

void head(void);
int getValue(void);
void findAvg(int x, int y);

int main(void)
{
    int a,b;

    ; // statement

}

void head(void)
{
    printf("----------------------\n");
    printf(" Finds average value.\n");
    printf("----------------------\n");
    return ;
}

int getValue(void)
{
    int n;
    printf("Enter a value:");
    scanf("%d", &n);
    return n;
}

void findAvg(int x, int y)
{
    printf("%f", (float)(x+y)/2);
}

