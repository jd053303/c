#include <stdio.h>
main() {
	FILE *fp;
	char st[50];
	
	printf("파일로부터 읽은 문자열 => ");
	fp=fopen("out.txt","r");
	fscanf(fp, "%s", st);
	fclose(fp);
	puts(st); 
}
