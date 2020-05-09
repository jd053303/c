//////////////CheckSum///////////// 
#include <stdio.h>

check(int a){
	
	int s;
	printf("\n  홀수 패리티 : 1 	 짝수 패리티 : 2\n");
	printf("\n\n             입력 : ");
	
	do{
		s=getch()-'0';
	}while(s!=1&&s!=2);
	
	printf("%d", s);
	system("cls"); 
	///////////////////////////////////////////////////////
	int ch, chch, j, m, n, i, z, aa=-1;
	int ee[a][10], eee[a][10], he[10], hee[10];
	
	for(i=0; i<=10; i++) {
		he[i]=0;
		hee[i]=0;
	}
	
	printf("\n DATA를 입력하세요",z);
	for(z=1; z<=a; z++){
		aa++;
		j=1;
		
		printf("\n\n %d) : ",z);
		ch=getche();
			
		int su=0;
		chch = ch;
	
		do{
			m = ch/2;
			n = ch-m*2;
			ee[aa][j] = n;
			ch = m;
			j++;
			if(n==1) su++; 
		}while(m!=0);
		
 		if(su%2==0&&s==1||su%2==1&&s==2) ee[aa][0]=1;
 		else ee[aa][0]=0;
 		
 		j=j-1;
 		
 		if(j!=7) {
 			for(i=1; j+i<=7; i++){
 				ee[aa][j+i]=0;
			}
		}
 		
		if(s==1) printf("\t -> %c(%d)의 홀수 패리티 코드 변환 값 : ", chch,chch);
		if(s==2) printf("\t -> %c(%d)의 짝수 패리티 코드 변환 값 : ", chch,chch);	
		for(i=7;i>=0;i--){
 			printf(" %d ", ee[aa][i]);
 		}
	}
	printf("\n----------------------------------------------------------------------------------\n\t\t\t\t\t       ");
	for(i=7;i>=0;i--){
		for(j=0; j<=a-1; j++){
			he[i]=he[i]+ee[j][i];
		}
		if(he[i]%2==0&&s==1||he[i]%2==1&&s==2) he[i]=1;
		else he[i]=0;
		printf(" %d ", he[i]);
	}
	printf("\n----------------------------------------------------------------------------------\n");
	printf("위 DATA의 오류 비트를 입력하세요\n");
	z=0;
	for(i=0;i<=a-1;i++){
		printf("\n");
		printf("\t\t\t\t\t  %d) : ",++z);
		for(j=7;j>=0;j--){
			do{
				eee[i][j]=getch()-'0';
			}while(eee[i][j]!=0&&eee[i][j]!=1);
			printf(" %d ",eee[i][j]);
		}
		printf("\n"); 
	} 
	printf("\n----------------------------------------------------------------------------------\n\t\t\t\t\t       ");
	for(i=7;i>=0;i--){
		for(j=0; j<=a-1; j++){
			hee[i]=hee[i]+eee[j][i];
		}
		if(hee[i]%2==0&&s==1||hee[i]%2==1&&s==2) hee[i]=1;
		else hee[i]=0;
		printf(" %d ", hee[i]);
	}
	printf("\n----------------------------------------------------------------------------------\n\t\t\t\t\t\t   ");
	for(i=0; i<=7; i++){
		if(he[i]!=hee[i]){
			printf("[ 오류 발생 ]");
			return 0; 
		} 
	}
	printf("[ 오류 없음 ]");
}

main() {
	
	int a;
	do{
		do{	
			system("cls");
			printf("\n검사 할 문자 갯수 (2~N): ");	
			scanf("%d", &a);
		}while(a<2);
		system("cls"); 
		check(a);
		printf("\n\n\n\n\t\t  다시 하려면 1을 눌러주세요."); 
		a=getche()-'0';
		if(a!=1) return 0;
	}while(a==1);
}
