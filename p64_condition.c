//���� ����(p64_condition)
#include <stdio.h>
main() {
	int n1, n2, big;
	
	printf("������ �ΰ� �Է��Ͻÿ� : ");
	scanf("%d %d", &n1, &n2);
	big=(n1>n2)?n1:n2;        //(n1>n2)?n1:n2; ���� ��ȣ ���� ���� �ùٸ��� :�� ��(n1) ���, �ƴϸ�
                              // ���� ��(n2)���
							  
	printf("�� �� �߿��� ū ���� %d�Դϴ�.", big);
} 
