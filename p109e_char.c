#include <stdio.h>

main() {
	
	int i, a;
	
	printf("출력할 문자의 개수는 ? = >");
	scanf("%d",&a);
	
	printf("출력 문자 => ");
	
	for(i=1; i<=a; i++) 
		printf("*");
		 
		
}
