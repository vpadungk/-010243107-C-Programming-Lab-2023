#include <stdio.h>

int x=55;
int *p,**q;

int main(){
    p = &x;
    q = &p;
    **q = 99;
    printf("Address\nx: %p\np: %p\nq: %p\n",p,&p,&q);
    printf("x = %d",x);
}