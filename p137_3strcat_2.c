#include <stdio.h>
#include <string.h>
main() {
	int i, pos;
	char st1[40], st2[20];
	
	printf("*** ���ڿ� ���� ***\n");
	printf("���� => ");
	gets(st1);
	printf("�߰� => ");
	gets(st2);
	strcat(st1, st2);
	printf("��ü => %s",st1);
}
