#include <stdio.h>
#define NO 20

void rank(int (*s)[2]) { 
	
	int j,i;
	
	for(i=0; i<NO; i++){
		*(*(s+i)+2)=0;
	}
	
	
	for(i=0; i<NO; i++){
		*(*(s+i)+2)=0;
	}
	for(j=0; j<NO-1; j++){
		for(i=0; i<NO; i++){
			if(*(*(s+i)+1)>*(*(s+j)+1)) *(*(s+i)+2)=*(*(s+i)+2)+1;
		}
	}
}


main() {
	srand(time(NULL));

	int i, data[NO][2];
	
	for(i=0; i<NO; i++){
		data[i][1]=50+rand()%51;
		data[i][2]=0;
	}
	
	
	rank(data);
	
	for(i=0; i<NO; i++){
		printf("%2dπ¯ => %3d¡° : %2dµÓ\n",i+1, data[i][1], (data[i][2]+1));
		if(i!=0&&i%4==0) printf("--------------------\n");
	} 
}
