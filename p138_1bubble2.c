#include <stdio.h>
#define NO 100
main() {
	int i, j, temp, no, flag, n[NO];
	srand(time(NULL));
	for(i=0; i<NO; i++) n[i]=rand()%1000;
	
	printf("정렬 전 : ");
	for(i=0; i<NO; i++) printf("%3d ", n[i]);
	
	for(i=NO-1; i>=0; i--){
		flag=0;
		for(j=0; j<i; j++){
			if(n[j]>n[j+1]){
				temp=n[j];
				n[j]=n[j+1];
				n[j+1]=temp;
				flag=1;
			}
		}
	if(flag==0) break;
	}
	
	printf("\n\n정렬 후 : ");
	for(i=0; i<NO; i++) printf("%3d ", n[i]);
	
	
	
	
	
	
	
	
}
