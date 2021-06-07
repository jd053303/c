#include <stdio.h>

main () {
	
	int a, b, c;
	
	
	
	printf("책의 가격은? =>");
	scanf("%d",&a);
	
	printf("\n책의 가격은 %d입니다.\n",a);
	
	
	printf("\n당신이 가진 용돈은 얼마인가요?:");
	
	scanf("%d",&b);
	
	if(b>=a) {
		
		c = b-a;
		
		printf("\n책을 구입하였습니다. 이제 남은 용돈은 %d입니다.", c);
	} 
	
} 
