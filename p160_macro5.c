#include <stdio.h>
#define MAX(x,y) ((x)>(y) ? (x) : (y)) 
#define ABS(x)  ((x) <0 ? -(x) :(x))

main() {
	int a,b, c;
	printf("두 숫자를 입력하시오. => ");
	scanf("%d %d", &a, &b);
	printf("절대값을 구할 숫자를 입력하시오. => ");
	scanf("%d", &c);
	printf("-----------------------------------\n");
	printf("큰 수는 %d입니다.\n", MAX(a,b));
	printf("%d의 절댓값은 %d입니다.", c, ABS(c));
}
