#include <stdio.h>
main() {
	
	int i, n, num=0, big=0, small=0, etc=0;
	char ch,yes;
	

	
	do{
	system("cls");
	printf("���ڿ��� �Է��ϸ� �������� ������ ������ ����մϴ�.\n===================================================\n");
	printf("�Է� ���ڿ� => ");
	
	num=0, big=0, small=0, etc=0;	
	
	do{
		ch=getche();
		if(ch>='1'&&ch<='9') num++;
		else if(ch>='a'&&ch<='z') small++;
		else if(ch>='A'&&ch<='Z') big++;
		else if((ch!=13)||(ch<'A'&&ch>'Z')||(ch<'a'&&ch>'z')||(ch<'1'&&ch>'9'))etc++;
	}while(ch!=13);
	

 	printf("\n--------------------------------------------------");
 	printf("\n���� : %d, �빮�� : %d, �ҹ��� : %d, ��Ÿ : %d\n", num, big, small, etc);
 	printf("\n===================================================\n");
 	printf("�ٽ� �ϰڽ��ϱ�?(y/n) => ");
 	yes=getche(); printf("\n");
 	}while(yes=='Y'||yes=='y');
	 
}
