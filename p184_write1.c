#include <stdio.h>
main() {
	FILE *fp;
	char st[50];
	
	printf("���Ϸ� ������ ���ڿ��� �Է��Ͻÿ�. => ");
	scanf("%s", st);
	fp=fopen("out.txt", "w");
	fprintf(fp, "%s", st);
	fclose(fp);
	printf("�ڷ����� ������ �Ϸ�Ǿ����ϴ�.");
}
