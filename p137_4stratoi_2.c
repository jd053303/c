#include <stdio.h>
#include <string.h>
main() {
	int i, num=0;
	char st[20];
	
	printf("*** 숫자형 문자열 정수 변환 ***\n\n");
	printf("문자열 => ");
	gets(st);
	num=atoi(st);
	printf("정  수 => %d", num);
}
