#include <stdio.h>
#define NO 20
main() {
	int i, j, small=0, big=0, last, temp;
	char asc, sm[NO], bg[NO];
	
	srand(time(NULL));
	
	printf("생성된 문자 => ");
	
	for(i=0; i<NO; i++){
		do{
			asc=65+rand()%57;
		}while(asc>'Z'&&asc<'a');
		printf("%c ", asc);
		if(asc>=65&asc<=90) {
			bg[big]=asc;
			big++;
		}
		if(asc>=97&&asc<=122) {
			sm[small]=asc;
			small++;
		}
	}
	
	printf("\n\n=== 정렬 전===");
	printf("\n대문자(%d개) =>", big);
	for(i=0; i<big; i++) printf(" %c,", bg[i]);
	printf("\n소문자(%d개) =>", small);
	for(i=0; i<small; i++) printf(" %c,", sm[i]);
	
	for(j=0; j<big; j++){
		for(i=0; i<big-1; i++){
			if(bg[i]>bg[i+1]){
				temp=bg[i];
				bg[i]=bg[i+1];
				bg[i+1]=temp;
			}
		}
	}
	
	for(j=0; j<small; j++){
		for(i=0; i<small-1; i++){
			if(sm[i]>sm[i+1]){
				temp=sm[i];
				sm[i]=sm[i+1];
				sm[i+1]=temp;
			}
		}
	}
	

	printf("\n\n=== 정렬 후 ===");
		printf("\n대문자(%d개) =>", big);
	for(i=0; i<big; i++) printf(" %c,", bg[i]);
		
	
	printf("\n소문자(%d개) =>", small);
	for(i=0; i<small; i++)	printf(" %c,", sm[i]);
	
	 
}
