#include <stdio.h>

int main() {
	
	int a, i;
	
	for(a = 1; a < 10 ; a++){
	
	printf("\n====== %d´Ü =====\n", a);
			
	for(i = 1; i < 10; i++) {
    printf("|  %d X %d = %2d  |\n",a,i,i*a);
    
    if(i == 9){
    	printf("================\n\n");
	}
 	 }
 	
	}

}
