#include <stdio.h>

void swap(int x, int y) {
	int temp;
	
	temp=x;
	x=y;
	y=temp;
}
void main() {
	int a, b;
	
	printf("ù ��° �� a�� �Է��Ͻÿ� => ");
	scanf("%d", &a);
	printf("�� ��° �� b�� �Է��Ͻÿ� => ");
	scanf("%d", &b);
	swap(a, b);
	printf("���� ��ȯ�� �� => a=%d, b=%d\n", a, b) ;
}
