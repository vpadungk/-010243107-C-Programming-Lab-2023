#include <stdio.h>

int count=1,user,sum=0;
int main(){
    while(count<=5){
    printf("Input number: ");
    scanf("%d",&user);
    sum = sum+user;
    count++;
    }
    
    printf("Sum of numbers: %d\n", sum);

}