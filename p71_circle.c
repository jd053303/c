# include <stdio.h>

main () {
	int r;
	float e,s;
	
	printf("원의 반지름을 입력하시오.=>");
	
	scanf("%d",&r);
	
	printf("\n--------------------\n");
	
	e=2*3.14*r;
	s=3.14*(r*r);
	
	printf("\n원의 둘레는 %7.2f입니다.\n원의 넓이는 %.2e입니다.\n\n=====================\n",e,s); 
}
