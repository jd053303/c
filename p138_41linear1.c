#include <stdio.h>
#define NO 10
main(){
	srand(time(NULL));
	
	int i, j=0, x, s[10];
	 
	
	for(i=0; i<NO; i++){
		s[i]=1+rand()%9;
	}
	
	printf("검색할 숫자를 정수로 입력하시오 : ");
	do{
		x=getch()-'0';
	}while(x<1||x>9);
	printf("%d", x);
	
	for(i=0; i<NO; i++){
		if(s[i]==x){
		 printf("\n%d(은) 배열의 %d번째에 위치합니다.",x,i+1);
		 j=1;
		 break;
		}
	}

	if(j==0) printf("\n입력한 자료가 존재하지 않습니다.");
	
	printf("\n난 수 => ");
	for(i=0; i<NO; i++) printf("%d ", s[i]);
	
	
}
