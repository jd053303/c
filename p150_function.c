#include <stdio.h>

int big(int x, int y) {
	if(x>y) return x;
	else return y;
}

main() {
	int a, b, c, max;
	
	printf("3���� ������ �Է��ϸ� ū ���� ����մϴ�. => ");
	scanf("%d %d %d", &a, &b, &c);
	max=big(big(a,b),c);
	
	printf("���� ū ���� %d�Դϴ�.", max);
}
