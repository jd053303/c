#include <stdio.h>
main() {
	int a;
	int *pt;
	
	a=10;
	pt=&a;
	printf("a의 주소 : %d\n",&a);
	printf("pt의 값 : %d\n\n", pt);
	
	printf("a의 내용물 : %d\n",a);
	printf("pt에 저장된 주소의 내용물 : %d\n\n",*pt);
}
