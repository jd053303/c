//참조 연산자(p62_reference)
#include <stdio.h>
main() {
	int a=3;
	
	printf("a의 주소 : %d 번지\n", &a);
	printf("a에 저장된 값 : %d, %d\n", *&a, a);
} 
