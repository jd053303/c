#include <stdio.h>
#define NO 5
main() {
		struct student{
		int id;
		char name[9];
		int score;
	};
	
	struct student class[NO];
	int no, i;
	
	srand(time(NULL));
	printf(" *** 데이터 입력 ***\n");
	for(i=0; i<NO; i++) {
		class[i].id=1100+i+1;
		printf("%2d번 이름 => ", i+1);
		scanf("%s", class[i].name);
		class[i].score=40+rand()%61;
	}
	
	printf("\n *** 데이터 출력 ***\n");
	for(i=0; i<NO; i++) printf("%4d %-9s %3d\n", class[i].id, class[i].name, class[i].score);
}
