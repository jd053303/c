#include <stdio.h>
main() {
	int i, score=0;
	char ch;
	
	printf("������ �Է��ϼ��� =>");
	
	do{
		ch=getch();
	}while(ch<48||ch>57);
	score=ch-'0';
	printf("%d",score);
	if(score==0) {
		printf("\n�Է��� ������ %d�� �Դϴ�.", score); return 0;}
	

	if(ch>=49){
		do{
		ch=getch();
		}while(ch!=13&&ch<48||ch>57);
		i=ch-'0';		
		if(ch==13){ printf("\n�Է��� ������ %d�� �Դϴ�.", score); return 0;}
		if(i==0) printf("%d", i);
		if(i!=13&&i!=0){
			printf("%d", i); printf("\n�Է��� ������ %d%d�� �Դϴ�.", score, i); return 0; }
	}

	
	if(score==1&&i==0) 
		do{
			i=getch();
		}while(i!=13&&i!=48);
		if(i==13){printf("\n�Է��� ������ %d%d�� �Դϴ�.", score, (i-'0')); return 0;}
		else if(i!=13)  printf("%d", i-'0'); printf("\n�Է��� ������ 100�� �Դϴ�.");
}

