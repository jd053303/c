#include <stdio.h>

main() {
	
	int i;
	
	//srand(time(NULL)); 
	for(i=1; i<=20; i++) 
		printf(" %2d => %d\n", i, rand()%101);
	

} 
