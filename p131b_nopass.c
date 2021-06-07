#include <stdio.h>
main() {
	int  i, a[20], b=0, c=0;
	
	srand(time(NULL));
	
	for(i=0; i<20; i++)
		a[i]=1+rand()%100;
	
	printf("==== 점수 출력 ====\n\n");
	for(i=0; i<20; i++)
		printf("%2d번 점수 => %3d\n", i+1, a[i]);
		
	printf("\n\n==== 합격자 출력 ====");
	for(i=0; i<20; i++){	
		if(a[i]>=70) b++;
		else c++;
	}
	
	printf("\n합격자는 %d명 이고, 불합격자는 %d명 입니다.", b, c); 
}
