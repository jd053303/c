#include <stdio.h>
#define NUM 20
#define SUB 7

main() {
	int n, i, score[NUM][SUB];
	
	srand(time(NULL));
	
	for(i=0; i<NUM; i++){
		for(n=0; n<SUB; n++){
			score[i][n]=60+rand()%41;
		}
	}
	
	printf("��ȣ    ���� ���� ���� ��ȸ ���� ���� ����\n");
	printf("-------------------------------------------\n");
	
	for(i=0; i<NUM; i++){
		printf("%2d => ", i+1);
		for(n=0; n<SUB; n++){
			printf("%5d", score[i][n]);
		}
		printf("\n");
	}
	
}
