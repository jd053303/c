#include <stdio.h>
#define MAX(x,y) ((x)>(y) ? (x) : (y)) 
#define ABS(x)  ((x) <0 ? -(x) :(x))

main() {
	int a,b, c;
	printf("�� ���ڸ� �Է��Ͻÿ�. => ");
	scanf("%d %d", &a, &b);
	printf("���밪�� ���� ���ڸ� �Է��Ͻÿ�. => ");
	scanf("%d", &c);
	printf("-----------------------------------\n");
	printf("ū ���� %d�Դϴ�.\n", MAX(a,b));
	printf("%d�� ������ %d�Դϴ�.", c, ABS(c));
}
