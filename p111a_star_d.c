#include <stdio.h>

main () {
	
	int i, j, d, a;


	for(i = 0; i < 4; i++) {
		
		for(d = 3; d > i-3; d--){
			printf(" ");
		}
		
		for(a= 0; a<j-1; a++){
			printf("*");
		}
		
		for(j = 1; j<i+2; j++){
			printf("*");
		}
				
		
		printf("\n");
	}
	

	
}


