#include <stdio.h>

main () {
	
	int a, b;
	printf("시간과 분을 입력하세요 : ");
	scanf("%d %d", &a, &b);
	printf("입력한 시간의 30분 전 시간은");
	
	if(b>=30)
		printf("%d시 %d분\n",a ,b-30);
	else
	{
	if(a==0)
		printf("%d시 %d분\n",a+23,b+30);
			
	else
		printf("%d시 %d분\n",a-1,b+30);
	
	}
	
	
}
