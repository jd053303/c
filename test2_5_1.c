#include <stdio.h>
#define NO 20
#define SUB 5


main() {
	
	srand(time(NULL));
	
	int j, n, i, smax, star;
	int s[NO][SUB];
	int sum[NO]={0};
	int s_sum[SUB]={0};
	int max[SUB];
	float avg[NO], s_avg[SUB];
	
	for(i=0; i<NO; i++) {
		s[i][n]=0;
		sum[i]=0;
		avg[i]=0;
		for(n=0; n<SUB; n++){
			s[i][n] = 40+rand()%61;
			sum[i] += s[i][n];
		}
		
		avg[i]= (float)sum[i]/5;
	}
	
	
	for(n=0; n<SUB; n++){
		s_sum[n]=0;
		s_avg[n]=0;	
		smax =0;
		for(i=0; i<NO; i++){
			s_sum[n]+=s[i][n];
			if(s[i][n]>=smax){
				smax =s[i][n];
				max[n]=i+1;
			} 
		}
		s_avg[n]=(float)s_sum[n]/20;
	}
	

	
	printf("=====================================================================\n");
	printf("  번호    국어 수학 사회 영어 과학 구조  총점  평균  성취수준 \n");
	printf("=====================================================================\n");
	
	for(i=0; i<NO; i++){	
		if(i!=0&& i%5==0) printf("--------------------------------------------------------------------\n");
		printf("%5d ",i+1);
		star=(int)avg[i]/10;
		for(n=0; n<SUB; n++){	
			printf("%6d",s[i][n]);
		}
		printf(" %6d   %.1f    ", sum[i], avg[i]);
		
		for(j=0; j<star; j++) printf("*");
		printf("\n");
	}
	printf("=====================================================================\n");
	printf("과목총점");
	for(n=0; n<SUB; n++) printf("%6d", s_sum[n]);
	printf("\n과목평균");
	for(n=0; n<SUB; n++) printf(" %5.1f", s_avg[n]);
	printf("\n 장학생");
	for(n=0; n<SUB; n++)
		printf("  %2d번", max[n]);	
	printf("\n=====================================================================\n");
}
