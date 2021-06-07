#include <stdio.h>
#define NO 20
#define SUB 7


main() {
	int n, s, score[NO][SUB], sum[NO], sub_sum[SUB], sub_max[SUB], sub_min[SUB];
	float avg[NO], sub_avg[SUB] ;
	
	
	srand(time(NULL));
	
	for(n=0; n<NO; n++) {
		*(sum+n)=0;
		for(s=0; s<SUB; s++) {
			*(*(score+n)+s)=60+rand()%41;
			*(sum+n)+=*(*(score+n)+s);
		}
		*(avg+n)=(float)(*(sum+n))/SUB;
	}
	
	for(s=0; s<SUB; s++) {
		*(sub_sum+s)=0;
		*(sub_avg+s)=0;
		*(sub_max+s)=0;
		*(sub_min+s)=100;
		
		for(n=0; n<NO; n++) {
			*(sub_sum+s)+=*(*(score+n)+s);
			if(*(sub_max+s)<=*(*(score+n)+s)) *(sub_max+s)=*(*(score+n)+s);
			if(*(sub_min+s)>=*(*(score+n)+s)) *(sub_min+s)=*(*(score+n)+s);
		}
		*(sub_avg+s)=(float)*(sub_sum+s)/20;
	} 
	
	
	//출력 
	printf("==================================================================\n");	
	printf("\n\t\t\t     s/w\n\n");
	printf("==================================================================\n");	
	printf("번호      국어  수학  사회  과학  영어  구조  프로     총합  평균\n");
	printf("==================================================================\n");	
	
	for(n=0; n<NO; n++) {
		if(n!=0&&n%5==0) printf("------------------------------------------------------------------\n");
		printf("%2d   =>", n+1);
		
		for(s=0; s<SUB; s++) {
			printf("%6d",*(*(score+n)+s));		
		}
		
		printf(" %8d  %3.2f",*(sum+n),*(avg+n) );
		printf("\n");
	}
	printf("------------------------------------------------------------------\n");
	printf("총점    ");
	for(s=0; s<SUB; s++) {
		printf("%6d",	*(sub_sum+s));
	}
	
	printf("\n평균     ");
	
	for(s=0; s<SUB; s++){
	 	printf("%5.1f ", *(sub_avg+s));
	} 
	printf("\n------------------------------------------------------------------\n");
	
	printf("최고   ");
	for(s=0; s<SUB; s++) {
		printf("%6d", *(sub_max+s));
	}
		
	printf("\n최하   ");
		for(s=0; s<SUB; s++) {
		printf("%6d", *(sub_min+s));
	}
	printf("\n==================================================================\n\n");	
	
	
	
	
	
	
		

}
