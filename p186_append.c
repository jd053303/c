#include <stdio.h>
main() {
	FILE *fp;
	char st[50];
	
	printf("���Ͽ� �߰���  ���ڿ��� �Է��Ͻÿ�. => ");
	gets(st);
	fp=fopen("string.txt","a");
	fputs(st, fp);
	fclose(fp);
	printf("�ڷ����Ͽ� ���ڿ��� �߰��Ǿ����ϴ�.");
}
