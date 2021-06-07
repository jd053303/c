#include <stdio.h>
#include <string.h>
main() {
	int i, pos;
	char st1[40], st2[20];
	
	printf("*** 문자열 연결 ***\n");
	printf("원본 => ");
	gets(st1);
	printf("추가 => ");
	gets(st2);
	printf("전체 => ");
	pos=strlen(st1);
	for(i=0; st2[i]!=NULL; i++)
		st1[pos+i]=st2[i];
	st1[pos+i]=NULL;
	printf("전체 => %s", st1);
}
