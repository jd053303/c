#include <stdio.h>

int f(int n) {
	if(n>0) {
	printf("*");
	return f(n-1);
	}
}

main() {
	int n;
	
	printf("출력할 별의 개수는? => ");
	scanf("%d", &n);
	f(n);
}
