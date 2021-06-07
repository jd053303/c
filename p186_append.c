#include <stdio.h>
main() {
	FILE *fp;
	char st[50];
	
	printf("파일에 추가할  문자열을 입력하시오. => ");
	gets(st);
	fp=fopen("string.txt","a");
	fputs(st, fp);
	fclose(fp);
	printf("자료파일에 문자열이 추가되었습니다.");
}
