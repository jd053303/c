////////////HammingCode Error////////////////
#include <stdio.h>

main() {
	
	int i, j, a, b, ag;
	int e[4],err[8];
	do{
		system("cls");
		printf("\n\nȦ�� �и�Ƽ : 1 	¦�� �и�Ƽ : 2\n");
		printf("\n             �Է� : ");
		
		do{
			a=getch()-'0';
		}while(a!=1&&a!=2);
		system("cls");
	
		printf("\n\n �����ڵ� �Է�(7bit) : ");
		for(i=1; i<=7; i++){
			do{
				err[i]=getch()-'0';
			}while(err[i]!=1&&err[i]!=0); 
			printf(" %d ", err[i]);
		}
		
		b=0;
 		for(i=1; i<=7; i+=2){
 			if(err[i]==1) b++;
		 }
		if(a==1&&b%2==0||a==2&&b%2==1) e[1]=1;
		else e[1]=0;
	
		b=0;
		for(i=2; i<=7; i++){
 			if(err[i]==1) b++;
 			if(i==3) i+=2;
		}
		if(a==1&&b%2==0||a==2&&b%2==1) e[2]=1;	
		else e[2]=0;

		b=0;
		for(i=4; i<=7; i++){
 			if(err[i]==1) b++;
		 }
		if(a==1&&b%2==0||a==2&&b%2==1) e[3]=1;
		else e[3]=0;

		b=0; 
		b=(e[3]*4)+(e[2]*2)+e[1];
		
		if(err[b]==0) err[b]=1;
		else err[b]=0;
		
		j=0;
		printf("\n ���� ���� ������ �� : ");
		for(i=1; i<=7; i++){
 			printf(" %d ", err[i]);
		}
		b=8;
		for(i=3; i<=7; i++){
			j=j+err[i]*b;
			b=b/2;	
			if(i==3) i++;	
		}
		printf("  ->  DATA : [ %d ]",j);
		
		printf("\n\n\n    - �ٽ� �Ϸ��� 1�� �����ּ��� -");
		ag=getch()-'0';
	}while(ag==1);
 	
}
