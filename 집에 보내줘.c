#include <stdio.h>

main() {
	
	int n, i;
	char yes;
	
	srand(time(NULL));
	
	do{
		
	system("cls");
	printf("����� �մϱ�? => ");
	
	n=getche()-'0';
	
	printf("\n=======�ֻ���========\n");
	
	for(i=1; i<=n; i++){
		printf("%d�� �ֻ��� �� => ", i);
		getch();
		printf("%d\n", 1+rand()%6);
	} 
	
	printf("\n�ٽ� �Ͻðڽ��ϱ�?(y/n) => ");
	yes=getche();
	}while(yes=='Y'||yes=='y');
}
