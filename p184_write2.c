#include <stdio.h>
main() {
	FILE *fp;
	char st[50];
	
	printf("���Ϸ� ������ ���ڿ��� �Է��Ͻÿ�. => ");
	gets(st);
	fp=fopen("string.txt","w");
	fputs(st, fp);
	fclose(fp);
	printf("�ڷ����� ������ �Ϸ�Ǿ����ϴ�.");
}
