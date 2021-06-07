#include <stdio.h>

main () {
	
	int i, j, d;


	for(i = 0; i < 7; i++) {
		
		for(d = 6; d > i; d--){
			printf(" ");
		}
		
		for(j = 0; j<i+1; j++){
			printf("*");
		
		}
		
		printf("\n");
	}
	

	
}


