#include <stdio.h>
int ex1=100;

int add(int x, int y) {
	int result;
	
	result=x+y+ex1;
	printf("���Լ��� result �� : %d\n", result);
	printf("���Լ��� result �ּ� : %d\n", &result);
	return result;
	
}

int ex2=50;

main() {
	int a=5, b=10, result;
	static int temp;
	
	result=add(a, b)+ex1+ex2;
	printf("\n���Լ��� result �� : %d\n", result);
	printf("���Լ��� result �ּ� : %d\n", &result);
	printf("���� ������ : %d", temp);
}
