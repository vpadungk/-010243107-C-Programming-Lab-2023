#include <stdio.h>

int i,j;
char out;

int main(){
    for (i=1;i<=6;i++){
        for (j=1;j<=6;j++){
            if (i+j==7)
            {
                out += (char)("%d+%d",i,j);
            }
            
        }
        
    }
    printf("%c",out);
}