#include <stdio.h>
main() {
	FILE *fp;
	char st[50];
	
	printf("���Ϸκ��� ���� ���ڿ� => ");
	fp=fopen("string.txt","r");
	fgets(st, sizeof(st), fp);
	fclose(fp);
	puts(st); 
}
