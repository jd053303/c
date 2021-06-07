#include <stdio.h>
#include <string.h>
main() {
	char a[20], b[20];
	
	printf("*** 문자열 복사	***");
	printf("\n원본 => ");
	gets(a);
	strcpy(b,a);
	printf("사본 => ");
	puts(b);
	
	 
}
