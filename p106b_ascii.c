#include <stdio.h>
main () {
	char ch;
	
	printf("문자 => ");
	ch=getchar();
	while (ch != EOF) {  //EOF는 ^Z로 입력의 종료를 의미 (ctrl = ^)  
		getchar();		//Enter키 흡 
		printf("%c의ASCII code : %d\n", ch, ch);
		printf("문자 => ");
		ch=getchar();
	}
}
