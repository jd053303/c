#include <stdio.h>
char star[20];

int f(int n) {
	if(n>0) {
		f(n-1);
		star[n]='*';
		printf("%s\n", star+1);
	}
}

main() {
	int n;
	
	printf("별을 출력할 줄의 개수는? => ");
	scanf("%d", &n);
	f(n); 
}
