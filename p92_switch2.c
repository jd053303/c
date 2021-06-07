#include <stdio.h>

main() {
	int score;
	
	printf("평가 점수 => ");
	scanf("%d", &score);
	
	printf("성취 결과 =>" );
	
	switch(score) {
		case 'score>=90' :printf("A등급\n");
				break;
		case 'score>=80' :printf("B등급\n");
				break;
		case 'score>=70' :printf("C등급\n");
				break;
		case 'score>=60':printf("D등급\n");
				break;
		default : printf("E등급\n");
		
			}

}
