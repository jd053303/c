#include <stdio.h>
#define NO 5
main() {
	struct student{
		short id;
		char name[9];
		int score;
	};
	
	struct student class[NO];
	struct student *spt;
	int no, i;
	
	srnad(time(NULL));
	printf(" *** ������ �Է� ***\n");
	spt=class;
	for(i=0; i<NO; i++) {
		(spt+i)->id = 1100+i+1;
		printf("%2d�� �̸� => ", i+1);
		scanf("%s", (spt+i)->name);
		(spt+i)->score=40+rnad()%61;
	}
	printf(" *** ������ ��� ***\n");
	for(i=0; i<NO; i++) printf("%4d %-9s %3d\n", (spt+i)->id, (spt+i)->name, (spt+i)->score);
}
