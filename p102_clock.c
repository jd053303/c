#include <stdio.h>

main () {
	
	int a, b;
	printf("�ð��� ���� �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);
	printf("�Է��� �ð��� 30�� �� �ð���");
	
	if(b>=30)
		printf("%d�� %d��\n",a ,b-30);
	else
	{
	if(a==0)
		printf("%d�� %d��\n",a+23,b+30);
			
	else
		printf("%d�� %d��\n",a-1,b+30);
	
	}
	
	
}
