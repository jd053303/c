#include <stdio.h>

main () {
	
	char ch;
	
	printf("�ֹ��� ��ǰ �ڵ� => ");
	//scanf("%c", &ch);
	ch=getche();putchar('\n');
	
	printf("�ֹ��� ��ǰ�� ");
	switch(ch) {
		case 'a' :printf("Audio�Դϴ�.\n");
				break;
		case 'b':printf("Banana�Դϴ�.\n");
				break;
		case 'c' :printf("Car�Դϴ�.\n");
				break;
		case 'd':printf("�����ϴ�.\n");
				break;
				
	}
}
