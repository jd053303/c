#include <stdio.h>

main () {
	
	int i, j;


	for(i = 8; i > 0; i--) {
		
		for(j = 0; j<i-1; j++){
			printf("*");
		}
		
		printf("\n");
	}
	

	
}


