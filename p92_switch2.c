#include <stdio.h>

main() {
	int score;
	
	printf("�� ���� => ");
	scanf("%d", &score);
	
	printf("���� ��� =>" );
	
	switch(score) {
		case 'score>=90' :printf("A���\n");
				break;
		case 'score>=80' :printf("B���\n");
				break;
		case 'score>=70' :printf("C���\n");
				break;
		case 'score>=60':printf("D���\n");
				break;
		default : printf("E���\n");
		
			}

}
