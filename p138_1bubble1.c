#include <stdio.h>
#define NO 8
main() {
	int n[NO]={71, 12, 32, 4, 18, 10, 33, 24};
	int i, j, temp;
	
	printf("정렬 전 : ");
	for(i=0; i<NO; i++) printf("%2d\t", n[i]);
	
	for(i=NO-1; i>0; i--){
		for(j=0; j<i; j++){
			if(n[j]>n[j+1]){
				temp=n[j];
				n[j]=n[j+1];
				n[j+1]=temp;
			}
		}
	}
	
	printf("\n정렬 후 : ");
	for(i=0; i<NO; i++) printf("%2d\t", n[i]);
	
	
	
	
	
	
	
	
}
