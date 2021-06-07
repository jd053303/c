#include <stdio.h>
main() {
	int  i, a[20], s, z=0;
 	
	printf("당신이 원하는 점수는 => ");
	scanf("%d",&s);
	
	srand(time(NULL));
	
	for(i=0; i<20; i++)
		a[i]=1+rand()%100;
	
	printf("\n=== 점수 출력 ===\n");
	
	for(i=0; i<20; i++){
		printf("%2d번 점수 => %3d\n", i+1, a[i]);
		if((i+1)%5 ==0)printf("-----------------\n");
	}
		
	for(i=0; i<20; i++){
		if(a[i]==s)	z=i+1;
	}
		
	printf("\n\n==== 검색 결과 출력 ====\n");
	if(z==0) printf("\n당신이 원하는 점수는 없습니다.");
	else printf("당신이 원하는 점수를 %d번째에서 찾았습니다.", z);
		
}

