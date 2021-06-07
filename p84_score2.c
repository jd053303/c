//if~else문(p84_ifelse)
#include <stdio.h>

main() {
	
	int a;
	
	printf("당신의 성적은 몇 점 입니까? => ");
	scanf("%d", &a);
	
	if(a>=60)
		printf("합격하였습니다.\n축하합니다.");
	else
		printf("불합격하였습니다.\n다음 기회에 다시 도전하세요.");
} 
