//////////////Parity Code///////////// 

#include <stdio.h>

par(int se){
	
	int s;
	printf("\n  Ȧ�� �и�Ƽ : 1 	 ¦�� �и�Ƽ : 2\n");
	printf("\n\n             �Է� : ");
	
	do{
		s=getch()-'0';
	}while(s!=1&&s!=2);
	
	printf("%d", s);
	system("cls"); 
	///////////////////////////////////////////////////////
	int ch, chch, j=1, m, n, i;
	int ee[10];
	
	printf("\n\n   DATA�� �Է��ϼ��� : ");
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
 	
	if(s==1) printf("\n\n   %c(%d)�� Ȧ�� �и�Ƽ �ڵ�� ��ȯ �� : ", chch,chch);
	if(s==2) printf("\n\n   %c(%d)�� ¦�� �и�Ƽ �ڵ�� ��ȯ �� : ", chch,chch);
	
	for(i=7;i>=0;i--){
 		printf(" %d ", ee[i]);
 	}
 	/////////////////���� �ڵ� ����/////////////////////////
	if(se==2) {
		i=-1;
		su=0;
			printf("\n\n   �� DATA�� ���� ��Ʈ�� �Է����ּ��� : ");
		
		do{
			i++;
			do{
				j=getch()-'0';
			}while(j!=1&&j!=0);
			printf(" %d ", j);
			if(j==1) su++;
		}while(i!=7);
		
		if(su%2==0&&s==2||su%2==1&&s==1) printf("\n\n\n\t\t\t  [ ���� ���� ]");
		else printf("\n\n\n\t\t\t  [ ���� �߻� ]"); 
	}	
}

main() {
	
	int se, a;
	do{
		system("cls");
		printf("\n  �и�Ƽ �ڵ� Ȯ���ϱ� : 1  	�и�Ƽ �ڵ� ���� �˻� : 2\n");
		printf("\n\n\t\t    �Է� : ");
	
		do{
			se=getch()-'0';
		}while(se!=1&&se!=2);
		
		printf("%d", se);
		system("cls"); 
		par(se);
		printf("\n\n\n\n\t\t  �ٽ� �Ϸ��� 1�� �����ּ���."); 
		a=getche()-'0';
		if(a!=1) return 0;
	}while(a==1);
}
