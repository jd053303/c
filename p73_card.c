//�ڷ� �����(p73_card) 
#include <stdio.h>

main() {
	
	char name[21];
	int age;
	char code;
	float secure;   //���� float�� double�� �ϼ���. �ٵ� ���� �������٤����� 
	
	printf("�̸��Է� ��:");
	scanf("%s",name);
	printf("\n�����Է� ��:");
	scanf("%d",&age);
	getchar();		//fflush(stdin);  or getchar();
	printf("\n�μ��ڵ��Է� ��:");
	scanf("%c",&code);
	printf("\n����Ű�Է� ��:");
	scanf("%f",&secure);
	
	printf("\n*****************************\n");
	
	printf("�̸� : %s\n���� : %d\n�μ��ڵ� : %c\n����Ű : %.3f\n", name, age, code, secure);
	
	printf("********************************");
	
	
	 
	
	
}
