#include <stdio.h>

main() {
	
	int i, sum=0;

	for(i=1; i<=100; i++) {
		
		sum=sum+i;
		printf("i=>%3d,  sum =>%4d\n", i,sum);
		
		}
	printf("\nloop를 벗어난 최종 i값 : %d", i);
	
	
}
