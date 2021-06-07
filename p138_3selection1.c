#include <stdio.h>
#define NO 8
int main() {
	int i, j, temp, d[]={71, 12, 32, 4, 18, 10,33, 24};
	
	printf("정렬 전 : ");
	for (i=0; i<NO; i++) printf("%2d ", d[i]);
	printf("\n");
	
	for(i=0; i<NO; i++)
		for(j=i+1; j<NO; j++)
			if(d[i]>d[j]){
				temp=d[i];
				d[i]=d[j];
				d[j]=temp;
			}
			
	printf("\n정렬 후 : ");
	for (i=0; i<NO; i++) printf("%2d ", d[i]);
}
