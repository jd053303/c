#include <stdio.h>
main () {
	char ch;
	
	printf("���� => ");
	ch=getchar();
	while (ch != EOF) {  //EOF�� ^Z�� �Է��� ���Ḧ �ǹ� (ctrl = ^)  
		getchar();		//EnterŰ �� 
		printf("%c��ASCII code : %d\n", ch, ch);
		printf("���� => ");
		ch=getchar();
	}
}
