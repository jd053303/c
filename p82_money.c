#include <stdio.h>

main () {
	
	int a, b, c;
	
	
	
	printf("å�� ������? =>");
	scanf("%d",&a);
	
	printf("\nå�� ������ %d�Դϴ�.\n",a);
	
	
	printf("\n����� ���� �뵷�� ���ΰ���?:");
	
	scanf("%d",&b);
	
	if(b>=a) {
		
		c = b-a;
		
		printf("\nå�� �����Ͽ����ϴ�. ���� ���� �뵷�� %d�Դϴ�.", c);
	} 
	
} 
