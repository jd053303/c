#include <stdio.h>
main() {
	int i;
	char sa[5][10]={"usb," "mouse", "printer", "computer", "processor"};
	char*sp[5]={"usb","mouse", "printer", "computer", "processor"};
	
	printf("=== �Ϲ� �迭 ===\n");
	for(i=0; i<5; i++)
		printf("sa[%d] : %d, %s\n", i, sa[i], sa[i]);
		
	printf("=== ������ �迭 ===\n");
	for(i=0; i<5; i++)
		printf("sp+%d : %d, %s\n", i, sp[i], sp[i]);
		
	for(i=0; i<10; i++)
	printf("\n�� ���� �ʹ� �� ���� �ʹ� �� ���� �ʹ� �� ���� �ʹ� �� ���� �ʹ� �� ���� �ʹ�");	
}
