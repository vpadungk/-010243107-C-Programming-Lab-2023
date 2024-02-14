#include<stdio.h>

int main(void)
{
	int x;
	int sum = 0 ;

	for(x=1;x<=9;x++){
		if(x==5){
			break;           //Change this statement
		}
		else
		{
		    sum +=x;
		    printf("+%d ", x);
		}


	}
    printf("= %d", sum);

	return 0;
}
