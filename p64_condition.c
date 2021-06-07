//조건 연산(p64_condition)
#include <stdio.h>
main() {
	int n1, n2, big;
	
	printf("정수를 두개 입력하시오 : ");
	scanf("%d %d", &n1, &n2);
	big=(n1>n2)?n1:n2;        //(n1>n2)?n1:n2; 에서 괄호 안의 식이 올바르면 :앞 식(n1) 출력, 아니면
                              // 뒤의 식(n2)출력
							  
	printf("두 수 중에서 큰 수는 %d입니다.", big);
} 
