#include <stdio.h>

int f(int n) {
	if(n>0) {
	printf("*");
	return f(n-1);
	}
}

main() {
	int n;
	
	printf("����� ���� ������? => ");
	scanf("%d", &n);
	f(n);
}
