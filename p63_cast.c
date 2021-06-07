//형 변화(type cast) 연산자(P63_cast)
#include <stdio.h>
main() {
	int a=3;
	
	printf("4/3 : %d\n", 4/3); //정수끼리 연산결과는 정수 
	 printf("4/3 : %f\n", 4/3); //출력 서식지정 오류 
	 printf("4/3 : %f\n", 4/3.0); //정수와 실수의 연산결과는 실수 
	 printf("4/3 : %f\n", (float)4/3); //4를 강제로 형변환  (괄호 안 float, 괄호 다음 수만 변환) 
} 
