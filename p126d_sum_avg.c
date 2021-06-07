#include <stdio.h>

main() {
	int sum, i, score[20];
	float avg;
	
	srand(time(NULL));
	for(i=0; i<20; i++)
		score[i]=1+rand()%100;
		
	printf("\n==== 점수 출력 ====\n");
	for(i=0; i<20; i++)
		printf("%2d번 점수 => %3d\n", i+1, score[i]);
		
		
	printf("\n==== 통계 출력 ====\n");
	for(i=0; i<20; i++)
		sum=sum+score[i];
	avg=(float)sum/20;
	
	printf("총점 :%d, 평균 : %.2f", sum, avg);
}
