//자료 입출력(p73_card) 
#include <stdio.h>

main() {
	
	char name[21];
	int age;
	char code;
	float secure;   //쌤은 float을 double로 하셨음. 근데 나는 오류난다ㅎㅎㅎ 
	
	printf("이름입력 해:");
	scanf("%s",name);
	printf("\n나이입력 해:");
	scanf("%d",&age);
	getchar();		//fflush(stdin);  or getchar();
	printf("\n부서코드입력 해:");
	scanf("%c",&code);
	printf("\n보안키입력 해:");
	scanf("%f",&secure);
	
	printf("\n*****************************\n");
	
	printf("이름 : %s\n나이 : %d\n부서코드 : %c\n보안키 : %.3f\n", name, age, code, secure);
	
	printf("********************************");
	
	
	 
	
	
}
