#include <stdio.h>
main() {
	int i, n, score,vic_n, vic_s;
	char yes;
	
	srand(time(NULL));
	do{
		system("cls");
		do{
		printf("����� ������ �մϱ�?(2~9) => ");
		n=getche()-'0'; putchar('\n');
		if(n<2||n>9) printf("\n�߸� �Է��Ͽ����ϴ�!!!!\n\n");
		}while(n<2||n>9); 
	
			printf("\n=================================================");
			printf("\n1�� �ֻ����� ��������(�����̽��� �Է�) : ");
			vic_n=1;
			vic_s=1+rand()%6;
			printf(" %d\n", score);
			for(i=2; i<=n; i++){	
				printf("\n%d�� �ֻ����� ��������(�����̽��� �Է�) : ", i);
				getch(); //�����̽��ٸ� ��ٸ� 
				score=1+rand()%6;
				printf(" %d\n", score);
				if(score>vic_s){
					vic_s=score;
					vic_n=i;
					}
				}	
		
		printf("\n===================================================");
		printf("\n���� ��ȣ : %d,  ���� ���� : %d", vic_n, vic_s);
		printf("\n===================================================");
		system("color 5F");
		printf("\n�ٽ� �ϰڽ��ϱ�?(y/n) => ");
		yes=getche(); putchar('\n');
		
	}while(yes =='y'|| yes == 'Y');
	
}

	
