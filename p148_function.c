#include <stdio.h>
	
int fun(int x, int y) {
	if(x>y) return x;
	else return y;
}


void main() {
	int a, b, big;
	printf("두개의 정수를 입력하면 큰 수를 출력합니다. => ");
	scanf("%d %d", &a, &b);
	big=fun(a, b);
	printf("큰 수는 %d입니다.", big);
}
