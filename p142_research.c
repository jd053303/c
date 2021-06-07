#include <stdio.h>
main() {
	char S[101];
	int i, c=0, cc=0;
	printf("100자 이내의 문자열을 입력하시오. : ");
	scanf("%s",S);
	for(i=0;  S[i]!='\0'; i++){
		if(S[i]=='c'||S[i]=='C'){
			c++;
			if(S[i+1]=='c'||S[i+1]=='C')
			cc++;
		}
	}
	
	printf("C의 개수는 : %d\n",c);
	printf("CC의 개수는 : %d\n",cc);
}
