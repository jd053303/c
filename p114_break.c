#include <stdio.h>
main() {
	int i, sum=0;
	
	for(i=1; i<=20; i++) {
		printf("%d ", i);
		if(i==10) break;
		sum=sum+i;
		}
	printf("\n1~10������ �� : %d \n", sum);
}
