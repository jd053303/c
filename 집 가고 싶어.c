#include <stdio.h>
main() {
	
	int i, small=0, big=0, n;
	char ch, yes;
	
	do{
	system("cls");
	printf("�Է��� ���� �� => ");
	
	scanf("%d",&n); 
	
	printf("�Է��ϼ��� => ");
	
	for(i=1; i<=n; i++){
		do{
		ch=getch();
		}while((ch<'A'||ch>'Z')&&(ch<'a'||ch>'z'));
		printf("%c", ch);
		if(ch>='A'&&ch<='Z') big++;
		else small++;
	}
	
	
	printf("\n\n�ҹ��� : %2d\n�빮�� : %2d",small, big);
	
	
	printf("\n�ٽ� �Ͻðڽ��ϱ�?(y/n) => ");
	yes=getche();
	}while(yes=='Y'||yes=='y');
}

