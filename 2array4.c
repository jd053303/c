#include <stdio.h> 
#define NUM 20
#define SUB 7

main() {
	
	int n,sum[NUM], i, score[NUM][SUB], ssum[SUB], gg=0;
	float savg[SUB], avg[NUM];
	
	srand(time(NULL));
	
	for(i=0; i<NUM; i++){
		sum[i]=0;
		avg[i]=0;
		for(n=0; n<SUB; n++){
			score[i][n]=60+rand()%41;
			
			
			sum[i]+=score[i][n];
			
			ssum[gg]=score[i][n];
			gg++;
		}	
		gg=0;
	
		avg[i]=(float)sum[i]/7;
		savg[gg]=(float)ssum[gg]/20;
	}
	

	printf("----------------------------------------------------------\n");
	printf("번호    국어 영어 수학 사회 과학 구조 프로      총점  평균\n");
	printf("----------------------------------------------------------\n");
	
	for(i=0; i<NUM; i++){
		if(i!=0&&i%5==0) printf("-----------------------------------------------------------\n");
		printf("%2d => ", i+1);
		for(n=0; n<SUB; n++){
			printf("%5d", score[i][n]);
			
		}
		printf("%10d  %.2f", sum[i], avg[i]);
		
		printf("\n\n");
	}
		for(gg=0; gg<SUB; gg++)
		printf("총점    %5d", ssum[gg]);
		for(gg=0; gg<SUB; gg++)
		printf("평균   %.2f", savg[gg]);
	}
	
	
}
