#include <stdio.h>

main() {
	
	int a, b, c;
	
	printf("���� �뵷 => ");
	scanf("%d",&a);
	
	printf("�� �� =>");
	scanf("%d",&b);
	
	if(a>b) {
		
		c = a-b; 
		
		printf("���� �뵷�� %d�Դϴ�.", c);
		
		return 0; 
	}	
	
	c= b-a;
	
	printf("������ �ݾ��� %d�Դϴ�.",c);
	 
	
}
