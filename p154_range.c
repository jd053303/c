#include <stdio.h>
int ex1=100;

int add(int x, int y) {
	int result;
	
	result=x+y+ex1;
	printf("부함수의 result 값 : %d\n", result);
	printf("부함수의 result 주소 : %d\n", &result);
	return result;
	
}

int ex2=50;

main() {
	int a=5, b=10, result;
	static int temp;
	
	result=add(a, b)+ex1+ex2;
	printf("\n주함수의 result 값 : %d\n", result);
	printf("주함수의 result 주소 : %d\n", &result);
	printf("정적 변수값 : %d", temp);
}
