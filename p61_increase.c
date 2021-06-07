//증감 연산(p61_increase.c)
#include <stdio.h>
main() {
	int a, b;
	
	a=1;
	b=++a;
	printf("a=%d, b=%d\n", a, b);
	
	a=1;
	b=a++;
	printf("a=%d, b=%d\n", a, b);
	
	a=5;
	b=--a;
	printf("a=%d, b=%d\n", a, b);
	
	a=5;
	b=a--;
	printf("a=%d, b=%d\n", a, b);
} 
