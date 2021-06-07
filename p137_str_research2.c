#include <stdio.h>
#include <string.h>

main() {
	int i, j, n1, n2, pos, cnt=0;
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
			cnt++;
			i=i+strlen(st2);
		}
	}
    printf("\n기본 문자열에 \"%s\"가(이) %d번 포함되었습니다.\n",st2,cnt);	
	
}
