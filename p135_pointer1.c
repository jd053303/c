#include <stdio.h>
main() {
	int a;
	int *pt;
	
	a=10;
	pt=&a;
	printf("a�� �ּ� : %d\n",&a);
	printf("pt�� �� : %d\n\n", pt);
	
	printf("a�� ���빰 : %d\n",a);
	printf("pt�� ����� �ּ��� ���빰 : %d\n\n",*pt);
}
