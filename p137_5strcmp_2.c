#include <stdio.h>
main() {
	int t, i, p1, p2, cmp;
	char st1[20], st2[10];
		
	printf("*** 문자열 비교 ***\n\n");
	printf("문자열1 => ");
	gets(st1);
	printf("문자열2 => ");
	gets(st2);
	cmp=strcmp(st1 ,st2);
	if(cmp==0) printf("\n두 번째 문자열이 동일합니다.");
	else if(cmp >0)	printf("\n첫 번째 문자열이 더 큽니다.");	
	else printf("\n두 번째 문자열이 더 큽니다.");
}
