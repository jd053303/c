#include <stdio.h>
main() {
	int  i, s[20], a=0, b=0, c=0, d=0, e=0;
		
	srand(time(NULL));
	
	for(i=0; i<20; i++)
		s[i]=1+rand()%100;
	
	printf("==== 점수 출력 ====\n\n");
	for(i=0; i<20; i++)
		printf("%2d번 점수 => %3d\n", i+1, s[i]);
		
	printf("\n\n==== 응시생 통계  ====\n");
	for(i=0; i<20; i++){	
		switch(s[i]/10){
			case 10:
				
			case 9: a++;
				break;
			case 8: b++;
				break;
			case 7: c++;
				break;
			case 6: d++;
				break;
			default: e++;
		}
	}
	
	printf("A등급:%d명 B등급:%d명 C등급:%d명 D등급:%d명 E등급:%d명", a, b, c, d, e); 
}
