#include <stdio.h>
main() {
	int i;
	char st[20];
	
	printf("** 문자열의 길이 ***\n\n");
	 printf("문자열 => ");
	 gets(st);
	 i=strlen(st);
	 printf("문자열의 길이 => %d 글자", i);
}
