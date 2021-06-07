#include <stdio.h>
main() {
	int n, i, num;
	int max = 0, min =100;
	printf("학생 수를 입력하세요 : ");
	scanf("%d", &n);
	printf("점수를 입력하세요(0~100) : ");
	for(i=0; i<n; i++) {
		
		scanf("%d", &num);
		if(num>max) max=num;
		if(num<min) min=num;
	}
	
	printf("1등은 %d점, 꼴지는 %d점\n",max, min);
}
