#include <stdio.h>

main () {
	
	int i, score[5];
	
	printf("==== 점수 입력 ====\n");
	
	for(i=0; i<5; i++) {
		printf("%2d번 점수 => ", i+1);
		scanf("%d", &score[i]);
	}
}
