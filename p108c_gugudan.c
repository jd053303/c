#include <stdio.h>

main() {
	
	int i, dan;
	char ch, yes;
	
	do {
		system("cls"); //clear screen : 화면 초기화 
	printf("숫자를 입력하시오.(2~9) => ");
	ch=getche();
		putchar('\n');
	
	
		printf("\n======= %c단 =======\n",ch);
		dan=ch-'0';
		for(i=1; i<=9; i++)
			printf("%d X %d = %2d\n", dan, i, dan*i);
		printf("---------\n");
		printf("다시 하겠습니까?(y/n) => ");
		do{
		yes=getch();
		}while(yes!='y'&&yes!='Y'&&yes!='n'&&yes!='N'); 
		printf("%c", yes);
		putchar('\n');
	}while(yes =='y'|| yes == 'Y'); 
	
	
}
