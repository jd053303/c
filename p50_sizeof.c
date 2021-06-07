//자료형의 범위(p.50_sizeof.c)
#include <stdio.h>> 
#include <stdbool.h>>
main() {
	char c='K';
	short s=1;
	int i=2;
	long L=3;
	long long LL=4;
	float f=3.14;
	double d=3.14159;
	long double Ld=123456789;
	bool b=true;
	
	printf("char = %d\n", sizeof(c));
	printf("short = %d\n", sizeof(s));
	printf("int = %d\n", sizeof(i));
	printf("long = %d\n", sizeof(L));
	printf("long long = %d\n", sizeof(LL));
	printf("float = %d\n", sizeof(f));
	printf("double = %d\n", sizeof(d));
	printf("long double = %d\n", sizeof(Ld));
	printf("bool = %d\n", sizeof(b));
}
