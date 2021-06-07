#include <stdio.h>

main () {
	
	int a, b, c;
	
	printf("세 터널의 높이를 차례대로 입력하세요 : ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(170>=a)
		printf("\n충돌 %d", a);
		
	else if(170>=b)
		printf("\n충돌 %d", b);
		
	else if(170>=c)
		printf("\n충돌 %d", c);
	
	else
		printf("\n무사 통과");
	
}
