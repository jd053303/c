#include <stdio.h>

main () {
	int a, b, c;
	int sum;
	float avg;
	
	printf("����, ����, ���� ������ ������ �Է��Ͻÿ�.=>");
	
	scanf("%d %d %d", &a, &b, &c);
	
	sum = a + b + c;
	avg = sum / 3;
	
	printf("������ %d�̰�, ����� %f�Դϴ�.", sum, avg);
	
}
