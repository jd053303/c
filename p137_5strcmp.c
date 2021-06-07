#include <stdio.h>
main() {
	int t, i, p1, p2, cmp;
	char st1[20], st2[10];
		
	printf("*** 문자열 비교 ***\n\n");
	printf("문자열1 => ");
	gets(st1);
	printf("문자열2 => ");
	gets(st2);
	for(i=0; st1[i]!=NULL; i++) p1=st1[i];
	for(i=0; st2[i]!=NULL; i++) p1=st2[i];
	
	if(p1>p2) printf("\n첫 번째 문자열이 더 큽니다.");	
	else if (p1<p2) printf("\n두 번째 문자열이 더 큽니다.");	
	else printf("\n동일합니다."); 
}
