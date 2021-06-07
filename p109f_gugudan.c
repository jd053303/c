#include <stdio.h>

main() {
	
	int i, a, b;
	
	printf("숫자를 입력하시오.(2~9) => ");
	scanf("%d",&a);
	
	if(a>9||a<1) 
		printf("\n잘못 입력하였습니다!!!!");
	
	else
	{
		printf("\n======= %d단 =======\n",a);
	
		for(i=2; i<=9; i++) {
		
		b=a*i;
		
		printf("%d X %d = %d\n", a, i, b);
		}
	}
}
