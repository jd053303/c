#include <stdio.h>

main () {
	
	int score;
	
	printf("평가 점수 => ");
	scanf("%d", &score);
	printf("성취 결과 =>" );
	
	if(score>=90) 
		printf("A등급");

	else if(score>=80) 
		printf("B등급");

	else if(score>=70)
		printf("C등급");

	else if(score>=60)
		printf("D등급");

	else
		printf("E등급");
	
}

	

