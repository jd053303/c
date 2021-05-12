////////////////HammingCode////////////
#include <stdio.h>

main() {
	
	int su, suu, m, n, i, j, a, b, ag;
	int e[8];
	do{
		system("cls");
		printf("입력 ( 0~15(4bit) ) : ");
		scanf("%d", &su);
		
		printf("\n\n홀수 패리티 : 1 	짝수 패리티 : 2\n");
		printf("\n             입력 : ");
		
		do{
			a=getch()-'0';
		}while(a!=1&&a!=2);
		system("cls");
		//////////////////////////////////////////
		suu = su;
		i=7;
		do{
			if(m==0&&i!=2){
				e[i]=0;
			}
			else{
				m = su/2;
				n = su-m*2;
				e[i] = n;
				su = m;
			}
			
			if(i==5) i=i-2;
			else i--;
 		}while(m!=0||i!=2);
 		//////////////////////////////////////////
		b=0;
 		for(i=3; i<=7; i+=2){
 			if(e[i]==1) b++;
		 }
		if(a==1&&b%2==0||a==2&&b%2==1) e[1]=1;
		else e[1]=0;	
		b=0;
		for(i=2; i<=7; i++){
 			if(e[i]==1) b++;
 			if(i==3) i+=2;
		}
		if(a==1&&b%2==0||a==2&&b%2==1) e[2]=1;	
		else e[2]=0;
		b=0;
		for(i=5; i<=7; i+=2){
 			if(e[i]==1) b++;
		 }
		if(a==1&&b%2==0||a==2&&b%2==1) e[4]=1;
		else e[4]=0;
		printf("\n %d 의 해밍코드 값 : ", suu);
		for(i=1; i<=7; i++){
 			printf(" %d ", e[i]);
		}
		printf("\n\n\n    - 다시 하려면 1을 눌러주세요 -");
		ag=getch()-'0';
	}while(ag==1);
 	
}