#include <stdio.h>

main () {
	int a, b, c;
	int sum;
	float avg;
	
	printf("국어, 영어, 수학 성적을 정수로 입력하시오.=>");
	
	scanf("%d %d %d", &a, &b, &c);
	
	sum = a + b + c;
	avg = sum / 3;
	
	printf("총점은 %d이고, 평균은 %f입니다.", sum, avg);
	
}
