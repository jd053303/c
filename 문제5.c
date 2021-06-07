#include <stdio.h>
main () {
	 
	int i, score=0;
	char ch;
	
	printf("점수를 입력 하세요.=> ");
	for(i=0; i<=1; i++) {
		ch=getch();
		if(ch==13) break;
		if(ch>=0 && ch<='9') {
			putchar(ch);
			score=score*10+ch-'0';
		}
	} 
	
	if(score==10) {
		ch=getch();
		if(ch=='0'){
			score=100;
			putchar(ch);
		}
	}
	printf("\n입력한 점수는 %d점 입니다.",score);
}
//if((ch>=1)&&(ch<=10)) ch=getchar()-'0'; 
