#include <stdio.h>
main() {
	int i, n;
	char yes;
	
	
	do{
		system("cls");
		do{
	
		srand(time(NULL));
		printf("����� ������ �մϱ�?(2~9) => ");
		n=getche()-'0';
		if(n>9||n<1) {
			printf("\n�߸� �Է��Ͽ����ϴ�!!!!");
		}while(n>9||n<1); 
	
			printf("\n=================================================");
			for(i=1; i<=n; i++){	
				printf("\n%d�� �ֻ����� ��������(�����̽��� �Է�) : ", i);
				getch(); //�����̽��ٸ� ��ٸ� 
				printf(" %d\n", 1+rand()%6);	
			}
		printf("===================================================\n");
		system("color 5F");
		printf("\n�ٽ� �ϰڽ��ϱ�?(y/n) => ");
		yes=getche(); putchar('\n');
		
		}while(yes=='y'||yes=='Y');
		
	}while(yes =='y'|| yes == 'Y');
	
}

	
