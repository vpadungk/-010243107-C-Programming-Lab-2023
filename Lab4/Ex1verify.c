#include <stdio.h>

int count=1,user,sum=0,i;
int x[5] = {1,2,3,4,5};

int main(){
    for(i=1;i<=5;i++){
        i = count;
        while(count<=5){
            user = x[count-1];
            sum = sum+user;
            count++;
        }
        
    }
    printf("%d",sum == 15);
}