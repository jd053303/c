#include <stdio.h>
#include <string.h>

main() {
	int i, j, n1, n2, pos, flag=0;
	char st1[50], st2[10];
	
	printf("*** 문자열 검색 ***\n\n");
	printf("기본 문자열 =>");
	gets(st1);
	printf("검색할 문자열 => ");
	gets(st2);
	
	n1=strlen(st1); n2=strlen(st2);
	for(i=0; i<n1-n2+1; i++) {
		pos=i;
		for(j=0; j<n2; j++)
			if(st1[pos]!=st2[j]) break;
			else pos++;
		if(j==n2) {
			printf("\n기본 문자열에 \"%s\"가(이) 포합되었습니다.\n",st2);
			flag=1;
			break;
		}
	}
	if(flag==0) printf("\n기본 문자열에 \"%s\"가(이) 포함되지 않았습니다.\n",st2);
	
}
