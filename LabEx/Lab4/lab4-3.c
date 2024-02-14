#include<stdio.h>

int main(void)
{
	int hidden_number;
	int user_guess;
	hidden_number = 5;
 	user_guess = 0;

	while(user_guess!=hidden_number)
	{
		printf("Guess my number :");
		scanf("%d", &user_guess);
	}
	printf("Good guess !!\n");
	return 0;
}
