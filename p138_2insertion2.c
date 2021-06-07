#include <stdio.h>
#define NO 8

main() {
	int i, j, temp, s[NO]={71, 12, 32, 4, 18, 10, 33, 24};
	
	printf("정렬 전 : ");
	for(i=0; i<NO; i++) printf("%2d ", s[i]);
	
	for(i=1; i<NO; i++)
		for(j=i; j>0; j--)
		if(s[j-1]>s[j]){
		 temp=s[j];
		 s[j]=s[j-1];
		 s[j-1]=temp;
		}
		else break;
		
	printf("\n정렬 후 : ");
	for(i=0; i<NO; i++) printf("%2d ", s[i]);
		
}
