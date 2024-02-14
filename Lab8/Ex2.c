#include <stdio.h>

int a, b, c;
int *p, *q;

int main(){
    printf("Adress\n");
    printf("a: %p\nb: %p\nc: %p\np: %p\nq: %p\n\n",a,b,c,&p,&q);
    p = &a;
    *p = 20;
    p = &b;
    *p = 60;
    p = &c;
    *p = 100;
    printf("(a,b,c) = (%d,%d,%d)\n",a,b,c);
    printf("Adress\n");
    printf("a: %p\nb: %p\nc: %p\np: %p\nq: %p\n\n",a,b,c,&p,&q);

    p = &a;
    *p = 50;
    q = &c;
    *q = 80;
    q = &a;
    *q = 500;

    printf("(a,b,c,p,q) = (%d,%d,%d,%d,%d)\n",a,b,c,*p,*q);
    printf("Adress\n");
    printf("a: %p\nb: %p\nc: %p\np: %p\nq: %p\n\n",a,b,c,&p,&q);
}