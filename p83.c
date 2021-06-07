#include <stdio.h>

main() {
	
	int a;
	
	printf("당신의 포인트는 =>");
	scanf("%d",&a);
	
	if(a>=1000) {
		printf("당신은 우량고객입니다.\n상품 구입 시 10%% 할인 혜택이 주어집니다.\n감사합니다.");
		
		return 0; 	
	} 
	
	printf("감사합니다.");
}



/*
#include <stdio.h>

main() {
	
	int a;
	
	printf("당신의 포인트는 =>");
	scanf("%d",&a);
	
	if(a>=1000) {
		printf("당신은 우량고객입니다.\n상품 구입 시 10% 할인 혜택이 주어집니다.");
		
	} 
	
	printf("감사합니다.");
}
*/
