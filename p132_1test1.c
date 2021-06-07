#include <stdio.h>
main() {
	
	int s[20], i, max=0, min=101, pass=0, no=0, sum=0;
	float avg;
	
	srand(time(NULL));
	
	for(i=0; i<20; i++)
		s[i]=30+rand()%71;
		
	
	printf("*********************************\n* 컴퓨터 활용능력 자격검정 결과 *\n*********************************\n\n");
	
	
	printf("====== 응시자 점수 ======\n");
		
	
	for(i=0; i<20; i++){
		printf("%2d => %3d\n", i+1, s[i]);
		sum+=s[i];
		
		if((i+1)%5==0) printf("-----------------------\n");
			
	}
	
	for(i=0; i<20; i++){
		if(s[i]>max) max=s[i];
		else if(s[i]<min) min=s[i];
	}
	
	for(i=0; i<20; i++){
		if(s[i]>=60) pass++;
		else no++;
	}
	
	
	avg=(float)sum/20;
	
	
	printf("\n===== 응시자 통계 =====\n");
	
	printf("총 점 :  %d점\n평 균 : %.2f점\n", sum, avg);
	printf("-----------------------\n");
	printf("최고점 : %3d점\n최하점 : %3d점\n", max, min);
	printf("-----------------------\n");
	printf("합  격 :  %2d명\n불합격 :  %2d명\n", pass, no);
	printf("-----------------------\n");
}
