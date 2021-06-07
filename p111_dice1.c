#include <stdio.h>
main() {
	int i, n;
	
	srand(time(NULL));
	printf("몇명이 게임을 합니까?(2~9) => ");
	n=getche()-'0';
	putchar('\n');
	for(i=1; i<=n; i++)
		printf(" %2d번 => %d\n", i, 1+rand()%6);
									//1~6의 난수 
}
