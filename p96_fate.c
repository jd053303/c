#include <stdio.h>

main () {
	
	int a,b,c,d;
	
	printf("����� ���ָ� ���帳�ϴ�.\n����, ��, ���� ���ʴ�� �Է��ϼ��� : ");
	
	scanf("%d %d %d", &a, &b, &c);
	
	d = a-b+c;
	
	if(d%10==0)
		
		printf("����� ���ִ� ����Դϴ�.\n");
		else
		printf("����� ���ִ� �׷������Դϴ�.\n");
}
