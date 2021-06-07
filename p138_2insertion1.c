#include <stdio.h>
#define NO 5
main() {
	int s[NO+1]={1,3,5,7,9};
	int i, j, n=6;
		
	printf("6À» »ğÀÔ Àü : ");
	for(i=0; i<NO; i++) printf("%2d ", s[i]);
	
	for(i=NO-1; i>=0; i--){
		if(s[i]>n)
			s[i+1]=s[i];
		else {
			s[i+1]=n;
			break;
			}
	}
	

	
	printf("\n\n6À» »ğÀÔ  ÈÄ : ");
	for(i=0; i<=NO; i++) printf("%2d ", s[i]);
	
	
	
	
	
	
	
	
}
