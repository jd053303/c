#include <stdio.h>
#define NO 10
#define SUB 5

main() {
	FILE *fp;
	int j, i, s[NO][SUB];
	
	srand(time(NULL));
	for(j=0; j<SUB; j++){
		for(i=0; i<NO; i++)s[j][i]=40+rand()%61;
	}
	

	fp=fopen("score.dat","w");
	for(j=0; j<NO; j++){
		for(i=0; i<SUB; i++) fprintf(fp, "%4d", s[j][i]);	
		fprintf(fp, "\n");
		}
	fclose(fp);
	printf("�ڷ����� ������ �Ϸ�Ǿ����ϴ�.");
}
