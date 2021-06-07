#include <stdio.h>
main() {
	FILE *fp;
	char st[50];
	
	printf("파일로 저장할 문자열을 입력하시오. => ");
	scanf("%s", st);
	fp=fopen("out.txt", "w");
	fprintf(fp, "%s", st);
	fclose(fp);
	printf("자료파일 생성이 완료되었습니다.");
}
