#include <stdio.h>
main() {
	int i, sum=0;
	
	for(i=1; i<=10; i++) {
		if(i%2 == 0) continue;
		printf("%d ", i);
		sum=sum+i;
		}
	printf("\n1~10까지의 홀수의 합 : %d \n", sum);
}
