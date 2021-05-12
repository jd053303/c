//////////////Parity Code///////////// 

#include <stdio.h>

par(int se){
	
	int s;
	printf("\n  홀수 패리티 : 1 	 짝수 패리티 : 2\n");
	printf("\n\n             입력 : ");
	
	do{
		s=getch()-'0';
	}while(s!=1&&s!=2);
	
	printf("%d", s);
	system("cls"); 
	///////////////////////////////////////////////////////
	int ch, chch, j=1, m, n, i;
	int ee[10];
	
	printf("\n\n   DATA를 입력하세요 : ");
	ch=getche();
	
	int su=0;
	chch = ch;
	
	do{
		m = ch/2;
		n = ch-m*2;
		ee[j] = n;
		ch = m;
		j++;
		if(n==1) su++; 
	}while(m!=0);
	
 	if(su%2==0&&s==1||su%2==1&&s==2) ee[0]=1;
 	else ee[0]=0;
 	
 	j=j-1;
 	
 	if(j!=7) {
 		for(i=1; j+i<=7; i++){
 			ee[j+i]=0;
		}
	}
 	
	if(s==1) printf("\n\n   %c(%d)의 홀수 패리티 코드로 변환 값 : ", chch,chch);
	if(s==2) printf("\n\n   %c(%d)의 짝수 패리티 코드로 변환 값 : ", chch,chch);
	
	for(i=7;i>=0;i--){
 		printf(" %d ", ee[i]);
 	}
 	/////////////////오류 코드 검출/////////////////////////
	if(se==2) {
		i=-1;
		su=0;
			printf("\n\n   이 DATA의 오류 비트를 입력해주세요 : ");
		
		do{
			i++;
			do{
				j=getch()-'0';
			}while(j!=1&&j!=0);
			printf(" %d ", j);
			if(j==1) su++;
		}while(i!=7);
		
		if(su%2==0&&s==2||su%2==1&&s==1) printf("\n\n\n\t\t\t  [ 오류 없음 ]");
		else printf("\n\n\n\t\t\t  [ 오류 발생 ]"); 
	}	
}

main() {
	
	int se, a;
	do{
		system("cls");
		printf("\n  패리티 코드 확인하기 : 1  	패리티 코드 오류 검사 : 2\n");
		printf("\n\n\t\t    입력 : ");
	
		do{
			se=getch()-'0';
		}while(se!=1&&se!=2);
		
		printf("%d", se);
		system("cls"); 
		par(se);
		printf("\n\n\n\n\t\t  다시 하려면 1을 눌러주세요."); 
		a=getche()-'0';
		if(a!=1) return 0;
	}while(a==1);
}