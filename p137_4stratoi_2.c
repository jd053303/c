#include <stdio.h>
#include <string.h>
main() {
	int i, num=0;
	char st[20];
	
	printf("*** ������ ���ڿ� ���� ��ȯ ***\n\n");
	printf("���ڿ� => ");
	gets(st);
	num=atoi(st);
	printf("��  �� => %d", num);
}
