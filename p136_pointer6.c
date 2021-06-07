#include <stdio.h>
main() {
	int i,j;
	char sa[5][10]={"usb", "mouse", "printer", "computer", "processor"};
	char*sp[5]={"usb","mouse", "printer", "computer", "processor"};
	
	printf("=== 일반 배열 ===\n");
	for(i=0; i<5; i++){
		printf("%-10s =>", sa[i]);
		for(j=0; j<strlen(sa[i]); j++) {
			printf(" %c,", sa[i][j]);
		}
		printf("\b ");
		printf("\n");	
	}
	
	printf("\n=== 포인터 배열 ===\n");
	for(i=0; i<5; i++){
		printf("%-10s =>", sp[i]);
		for(j=0; j<strlen(sp[i]); j++){
			printf(" %c,",*(sp[i]+j));
		}
		printf("\b ");	
		printf("\n");
	}


}
