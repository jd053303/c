#include <stdio.h>

main () {
	
	int i, j, sum=0;
	
	for(i=1; i<=5; i++) {
		
		for(j=1; j<=10; j++){
			printf("*");
			
			sum =sum+1;
			
		}
			
	printf("\n");
	}
	printf("\n안쪽 for문의 실행 횟수 : %d", sum);
}
