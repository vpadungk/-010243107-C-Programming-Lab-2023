#include <stdio.h>

void count(int *p){
    (*p)++;
}

int main(){
    int var = 0, i;
    printf("Var: %d\n",var);
    for(i = 0; i < 10 ; i++){
        count(&var);
    }
    printf("Var: %d", var);
}