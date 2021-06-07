#include <stdio.h>

void swap(int x, int y) {
	int temp;
	
	temp=x;
	x=y;
	y=temp;
}
void main() {
	int a, b;
	
	printf("첫 번째 수 a를 입력하시오 => ");
	scanf("%d", &a);
	printf("두 번째 수 b를 입력하시오 => ");
	scanf("%d", &b);
	swap(a, b);
	printf("서로 교환된 값 => a=%d, b=%d\n", a, b) ;
}
