#include <stdio.h>
main() {
	struct student{
		int id;
		char name[10];
		float score;
	};
	
	struct student s1={1101, "Kim", 95.3};
	struct student s2={1102, "Lee", 91.8};
	struct student s3={1103, "Park", 92.5};
	
	printf("%d %-5s %.1f\n", s1.id, s1.name, s1.score);
	printf("%d %-5s %.1f\n", s2.id, s2.name, s2.score);
	printf("%d %-5s %.1f\n", s3.id, s3.name, s3.score);
}
