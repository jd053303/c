#include <stdio.h>

main() {
	
	int a, b, c;
	
	printf("받은 용돈 => ");
	scanf("%d",&a);
	
	printf("쓴 돈 =>");
	scanf("%d",&b);
	
	if(a>b) {
		
		c = a-b; 
		
		printf("남은 용돈은 %d입니다.", c);
		
		return 0; 
	}	
	
	c= b-a;
	
	printf("부족한 금액은 %d입니다.",c);
	 
	
}
