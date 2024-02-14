#include<stdio.h>

int main(void)
{
	int i;
	int j;

    for(i=1;i<7;i++){
        for(j=1;j<7;j++){
            if(i==j)
                printf("%4d", 1);
            else
                printf("%4d", 0);
        }
        printf("\n");
    }

    return 0;
}
