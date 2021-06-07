#include <stdio.h>
#include <string.h>
#define NO 5
main() {
	int a, i, j, min, max;
	char ch, st[NO][11], temp[11];
	
	printf("\n10개 이하의 문자들로 구성된 5개의 문자열을 입력하시오.\n");
	for(i=0; i<NO; i++) {
		printf("string %d => ", i+1);
		gets(st[i]);
	}
	
	printf("---------------------------------------------\n");
	printf("정렬된 문자열 :  ");

for(i=0; i<NO; i++){	
	j=0;
	j=strcmp(st[i] ,st[i+1]);
 	if(strcmp(st[j], st[j+1])>0) {
 		strcpy(st[j], st[j+1]);
 		strcpy(st[j+1], temp);
	 	}
	 }
	 
	 min=max=0;
	 for(i=1; i<NO; i++) {
	 	if(strlen(st[min])>strlen(st[i])) min=i;
	 	if(strlen(st[min])<strlen(st[i])) max=i;
	 }
	
	for(i=0; i<NO; i++) printf("%s, ", st[i]);
	printf("\b\b ");
	printf("\n가장 짧은 문자열 : %s", st[min]);
	printf("\n가장  긴  문자열 : %s", st[max]);
}


