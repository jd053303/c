#include <stdio.h>
#include <string.h>
#define NO 10
main() {
	int n, i, j, a=0;
	char ch, st[NO][11], temp[11];
	
	printf("\n�Է��� ���ڿ��� ������(2~9)? => ");
	do{
		n=getch()-'0';
	}while(n<1||n>9);
	printf("%d",n);
	
	printf("\n=== ���ڿ� �Է� ===");
	for(i=0; i<n; i++){
		printf("\n");
		printf("String %d =>",i+1);
		for(j=0; j<NO; j++){
			st[i][j]=getche();
			
			if(st[i][j]==13) break;	
		}
	} 
	
printf("=== ���ĵ� ���ڿ� ===");

for(i=0; i<n; i++){	
	j=0;
	j=strcmp(st[i] ,st[i+1]);
 	if(j>0) {
		temp[a]=st[i];
		st[i]=st[i+1];
		st[i+1]=temp[i];
		temp[a++];
		}
	}
	
	for(i=0; i<n; i++) printf("%s, ", st[i]);
}
                        
                                                                                                              

	

                        
                                                                                                              

	

