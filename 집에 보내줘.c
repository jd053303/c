#include <stdio.h>

main() {
	
	int n, i;
	char yes;
	
	srand(time(NULL));
	
	do{
		
	system("cls");
	printf("몇명이 합니까? => ");
	
	n=getche()-'0';
	
	printf("\n=======주사위========\n");
	
	for(i=1; i<=n; i++){
		printf("%d번 주사위 수 => ", i);
		getch();
		printf("%d\n", 1+rand()%6);
	} 
	
	printf("\n다시 하시겠습니까?(y/n) => ");
	yes=getche();
	}while(yes=='Y'||yes=='y');
}
