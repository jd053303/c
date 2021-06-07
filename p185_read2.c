#include <stdio.h>
main() {
	FILE *fp;
	char st[50];
	
	printf("파일로부터 읽은 문자열 => ");
	fp=fopen("string.txt","r");
	fgets(st, sizeof(st), fp);
	fclose(fp);
	puts(st); 
}
