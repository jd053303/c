#include <stdio.h>

int fact(int k) {
	
	if(k==1) return 1;
	else return fact(k-1) *k;
}

main() {
	int n;
	
	printf("������ �Է��ϸ� ����� ����մϴ�. => ");
	scanf("%d", &n);
	printf("%d�� ����� %d�Դϴ�.", n, fact(n));
}
