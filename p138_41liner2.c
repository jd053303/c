#include <stdio.h>
#define NO 10
main(){
	srand(time(NULL));
	
	int i, j=0, a, s[NO], p[NO];
	
	for(i=0; i<NO; i++) s[i]=1+rand()%9;
	
	for(i=0; i<NO; i++) p[i]=0;
	
	printf("검색할 숫자를 입력하시오 => ");
	do{
		a=getch()-'0';
	}while(a<1||a>9);
	
	printf("%d",a);
	
	
	for(i=0; i<NO; i++){
		if(s[i]==a) {
			p[i]=i+1;
			j=1;
		}
	}

	if(j==1){
		printf("\n%d(은) 배열의",a);
		for(i=0; i<NO; i++){
			if(p[i]!=0) printf(" %d", i+1);
		}	 
		printf("번째에 위치합니다.");
	}
	
	else if(j==0) printf("\n입력한 자료가 존재하지 않습니다.");
		
	printf("\n난수 => ");
	for(i=0; i<NO; i++) printf("%d ", s[i]);
}



//2개이상 출력X 
/*#include <stdio.h>
#define NO 10
main(){
	srand(time(NULL));
	
	int i, j=0,a=0, b=0, x, s[10];
	 
	
	for(i=0; i<NO; i++){
		s[i]=1+rand()%9;
	}
	
	printf("검색할 숫자를 정수로 입력하시오 : ");
	do{
		x=getch()-'0';
	}while(x<1||x>9);
	printf("%d", x);
	
	for(i=0; i<NO; i++){
		if(a==0&&s[i]==x){
			a=i;
			j=1;
		}
		if(a!=0&&s[i]==x){
			b=i;
		}
	}
	
	if(j==1){
	 printf("\n%d(은) 배열의 %d",x,a+1);
	 if(a!=b&&b!=0) printf(" ,%d", b+1);
	 printf("번째에 위치합니다.");
	}
	if(j==0) printf("\n입력한 자료가 존재하지 않습니다.");
	printf("\n난 수 => ");
	for(i=0; i<NO; i++) printf("%d ", s[i]);
}*/
