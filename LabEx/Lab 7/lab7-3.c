#include<stdio.h>
#include<string.h>
int main(void)
{
    char guess[5] = "rx55";     //Guess
    char password[5] = "rx58";
    int  n = 4;                 // n

    printf("%d\n",strcmp(guess,password));

    printf("%d",strncmp(guess,password,n));


    return 0;
}
