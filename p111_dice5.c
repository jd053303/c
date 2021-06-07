#include <stdio.h>
main() {
	int i, n, score,vic_n, vic_s;
	char yes;
	
	srand(time(NULL));
	do{
		system("cls");
		do{
		printf("몇명이 게임을 합니까?(2~9) => ");
		n=getche()-'0'; putchar('\n');
		if(n<2||n>9) printf("\n잘못 입력하였습니다!!!!\n\n");
		}while(n<2||n>9); 
	
			printf("\n=================================================");
			printf("\n1번 주사위를 던지세요(스페이스바 입력) : ");
			vic_n=1;
			vic_s=1+rand()%6;
			printf(" %d\n", score);
			for(i=2; i<=n; i++){	
				printf("\n%d번 주사위를 던지세요(스페이스바 입력) : ", i);
				getch(); //스페이스바를 기다림 
				score=1+rand()%6;
				printf(" %d\n", score);
				if(score>vic_s){
					vic_s=score;
					vic_n=i;
					}
				}	
		
		printf("\n===================================================");
		printf("\n승자 번호 : %d,  승자 점수 : %d", vic_n, vic_s);
		printf("\n===================================================");
		system("color 5F");
		printf("\n다시 하겠습니까?(y/n) => ");
		yes=getche(); putchar('\n');
		
	}while(yes =='y'|| yes == 'Y');
	
}

	
