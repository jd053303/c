#include <stdio.h>
main() {
	
	int s[20], i, max=0, min=101, pass=0, no=0, sum=0;
	float avg;
	
	srand(time(NULL));
	
	for(i=0; i<20; i++)
		s[i]=30+rand()%71;
		
	
	printf("*********************************\n* ��ǻ�� Ȱ��ɷ� �ڰݰ��� ��� *\n*********************************\n\n");
	
	
	printf("====== ������ ���� ======\n");
		
	
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
	
	
	printf("\n===== ������ ��� =====\n");
	
	printf("�� �� :  %d��\n�� �� : %.2f��\n", sum, avg);
	printf("-----------------------\n");
	printf("�ְ��� : %3d��\n������ : %3d��\n", max, min);
	printf("-----------------------\n");
	printf("��  �� :  %2d��\n���հ� :  %2d��\n", pass, no);
	printf("-----------------------\n");
}
