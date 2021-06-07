#include <stdio.h>
#define NO 20
main() {
	int n, art[NO], pro[NO];
	
	srand(time(NULL));
	for(n=0; n<NO; n++)
		art[n]=50+rand()%51;
	for(n=0; n<NO; n++)
		pro[n]=50+rand()%51;
		
	printf("번호 프로 사무\n");
	printf("--------------\n");
	for(n=0; n<NO; n++)
		printf("%2d => %3d %3d\n", n+1, art[n],pro[n]);	
}
