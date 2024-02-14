#include<stdio.h>
int func1(int b, int c);
int func2(int i, int j);
int main(void) {
	int a = 1;
	int b = 2;
	int c = 3;
	b = func1(a, b);
	printf("%d %d %d \n", a, b, c);

	a = func2(b, c+2);

	printf("%d %d %d \n", a, b, c);
	c = func2(a, func1(b,c));
	printf("%d %d %d \n", a, b, c);
}

int func1(int b, int c)
{
     b = c;
     c = c-2;

     return c;
}
int func2(int i, int j)   {
	int a = i;
	int b = j;
	a = func1(b,a);
	return a;
}

