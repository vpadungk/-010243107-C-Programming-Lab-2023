#include<stdio.h>
void func(int a, int *b)  {
	a = *b;
	*b = a + 5;
}
void main()  {
	int a=10, b=15;
	int *c=&a,*d=&b;

	func(a, d);

	printf("%d %d \n",a, b);
	printf("%d %d \n",*c, *d);

	d = &a;
	func(*d, c);

    printf("%d %d \n",a, b);
    printf("%d %d \n",*c, *d);
}
