#include <stdio.h>
main() {
	int i, sum=0;
	
	for(i=1; i<=10; i++) {
		if(i%2 == 0) continue;
		printf("%d ", i);
		sum=sum+i;
		}
	printf("\n1~10������ Ȧ���� �� : %d \n", sum);
}
