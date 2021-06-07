#include <stdio.h>
main (){
	int i, j, pos;
	char st1[50], st2[20], st3[70];
	
	printf("*** 문자열 삽입 ***\n\n");
	printf("기본 무자열 => ");
	gets(st1);
	printf("삽입할 문자열 => ");
	gets(st2);
	printf("삽입할 위치 => ");
	scanf("%d", &pos);
	pos=pos-1;
	printf("\n최종 문자열 => ");
	for(i=0; i<pos; i++) printf("%c", st1[i]);
	printf("%s", st2);
	for(i=pos; st1[i]!=NULL; i++) printf("%c", st1[i]);
}
