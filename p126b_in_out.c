#include <stdio.h>

main () {
	
	int i, score[5];
	
	printf("==== ���� �Է� ====\n");
	for(i=0; i<5; i++) {
		printf("%2d�� ���� => ", i+1);
		scanf("%d", &score[i]);
	}
	
	printf("\n==== ���� ��� ====\n");
	for(i=0; i<5; i++)
		printf("%2d�� ���� => %3d\n", i+1, score[i]);
}
