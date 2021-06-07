//나머지 연산자(p57_modulus.c)
#include <stdio.h>
main() {
	int sec, min, left;
	
	printf("초를 입력하시오 : ");
	scanf("%d", &sec); //자판을 통한 입력 
	min=sec/60;
	left=sec%60;
	printf("%d초 => %d 분 %d 초 \n", sec, min, left);
	 
} 
