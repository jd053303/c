#include <stdio.h>

int big(int x, int y) {
	if(x>y) return x;
	else return y;
}

main() {
	int a, b, c, max;
	
	printf("3개의 정수를 입력하면 큰 수를 출력합니다. => ");
	scanf("%d %d %d", &a, &b, &c);
	max=big(big(a,b),c);
	
	printf("가장 큰 수는 %d입니다.", max);
}
