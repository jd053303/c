#include <stdio.h>
	
int fun(int x, int y) {
	if(x>y) return x;
	else return y;
}


void main() {
	int a, b, big;
	printf("�ΰ��� ������ �Է��ϸ� ū ���� ����մϴ�. => ");
	scanf("%d %d", &a, &b);
	big=fun(a, b);
	printf("ū ���� %d�Դϴ�.", big);
}
