#include <stdio.h>

int fact(int k) {
	
	if(k==1) return 1;
	else return fact(k-1) *k;
}

main() {
	int n;
	
	printf("정수를 입력하면 계승을 계산합니다. => ");
	scanf("%d", &n);
	printf("%d의 계승은 %d입니다.", n, fact(n));
}
