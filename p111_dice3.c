#include <stdio.h>
main() {
	int i, n;
	char yes;
	
	do{
	srand(time(NULL));
	printf("몇명이 게임을 합니까?(2~9) => ");
	n=getche()-'0';
	
	printf("\n=================================================");
		for(i=1; i<=n; i++){	
			printf("\n%d번 주사위를 던지세요(스페이스바 입력) : ", i);
			getch(); //스페이스바를 기다림 
			printf(" %d\n", 1+rand()%6);	
		}
	printf("===================================================\n");
	system("color 5F
	");
	printf("\n다시 하겠습니까?(y/n) => ");
	yes=getche(); putchar('\n');
	}while(yes =='y'|| yes == 'Y');

	

	
}

	
