#include <stdio.h>
#define NO 20
#define SUB 5

void total(int (*s)[SUB], int *t) {
	int no, subject;
	
	for(no=0; no<NO; no++)
		for(subject=0; subject<SUB; subject++)
			*(t+no)+=*(*(s+no)+subject);
}

void average(int *t, float *a) {
	int no;
	
	for(no=0; no<NO; no++) *(a+no)=(float)*(t+no)/SUB;
}

void rnak(int *a, int *t) {
	int i, j;
	
	for(i=0; i<NO; i++) *(t+i)=1;
	
	for(i=0; i<NO; i++) {
		for(j=0; j<NO-1; j++) {
			if(*(a+i)<*(a+(j+1))) *(t+i)=*(t+i)+1;
		}
	}
}

void main() {
	int n, s, score[NO][SUB], tot[NO]={0}, rnk[NO];
	float avg[NO];
	
	srand(time(NULL));
	for(n=0; n<NO; n++)
		for(s=0; s<SUB; s++) 
			score[n][s]=50+rand()%51;
			
	total(score, tot);
	average(tot, avg);
	rnak(tot, rnk);
	
	printf("번호  국어 영어 수학 사회 과학   총점  평균  석차\n");
	printf("-------------------------------------------------\n");
	for(n=0; n<NO; n++) {
		printf(" %2d  ", n+1);
		for(s=0; s<SUB; s++) printf(" %3d ", score[n][s]);
		printf("    %3d   %.1f   %2d\n", tot[n], avg[n], rnk[n]);
		if((n+1)%5==0)
			printf("-------------------------------------------------\n");
	}
}
