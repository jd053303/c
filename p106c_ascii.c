#include <stdio.h>
main () {
	char ch;
	
	printf("���� => ");
	ch=getche();   // getch() = (no buffer = enter X), (no echo = ȭ�鿡 ǥ������ X) 
	while (ch != 13) {  //13�� Enter�� �ƽ�Ű �ڵ� 
		printf("\n%c��ASCII code : %d\n", ch, ch);
		printf("=========================\n");
		printf("���� => ");
		ch=getche();
	}
}
