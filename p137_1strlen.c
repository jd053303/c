#include <stdio.h>
main() {
	int i=0;
	char st[20];
	
	printf("** 문자열의 길이 ***\n\n");
	 printf("문자열 => ");
	 gets(st);
	 while(st[i]!='\0'){
	 	i++;
	 }
	 printf("문자열의 길이 => %d 글자", i);
}
