#include <stdio.h>
#define NO 10
#define SUB 5
main() {
	FILE *fp;
	int r, c, score[NO][SUB];
	srand(time(NULL));
	for(r=0; r<NO; r++)
		for(c=0; c<SUB; c++) score[r][c]=40+rand()%61;
	fp=fopen("score.csv","w");
	for(r=0; r<NO; r++)
		for(c=0; c<SUB; c++) {
			fprintf(fp, "%3d", score[r][c]);
			if(c<SUB-1) fprintf(fp, ",");
			else fprintf(fp, "\n");
		}
	fclose(fp);
	printf("자료파일 생성이 완료되었습니다.");
}
