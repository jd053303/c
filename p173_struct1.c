#include <stdio.h>
main() {
	struct student{
		int id;
		char name[10];
		float score;
	} class[30];
	
	class[0].id=1101;
	strcpy(class[0].name, "Lee");
	class[0].score=95.3;
	class[1].id=1102;
	strcpy(class[1].name, "Kim");
	class[1].score=91.8;

	printf("%d %-5s %.1f\n", class[0].id, class[0].name, class[0].score);
	printf("%d %-5s %.1f\n", class[1].id, class[1].name, class[1].score);

}
