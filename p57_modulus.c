//������ ������(p57_modulus.c)
#include <stdio.h>
main() {
	int sec, min, left;
	
	printf("�ʸ� �Է��Ͻÿ� : ");
	scanf("%d", &sec); //������ ���� �Է� 
	min=sec/60;
	left=sec%60;
	printf("%d�� => %d �� %d �� \n", sec, min, left);
	 
} 
