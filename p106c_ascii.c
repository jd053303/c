#include <stdio.h>
main () {
	char ch;
	
	printf("문자 => ");
	ch=getche();   // getch() = (no buffer = enter X), (no echo = 화면에 표시하지 X) 
	while (ch != 13) {  //13은 Enter의 아스키 코드 
		printf("\n%c의ASCII code : %d\n", ch, ch);
		printf("=========================\n");
		printf("문자 => ");
		ch=getche();
	}
}
