//오버플로우 에러-p50_overflow.c
#include <stdio.h>
main() {
	int max=2147483647;
	
	printf("max=%d\n", max);
	max-max+1;
	printf("max+1=%d\n", max);
} 
