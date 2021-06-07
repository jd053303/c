#include <stdio.h>

main() {
	
	int i, a, b;
	
	//srand(time(NULL)); 
	
	b = 0;
	
	for(i=1; i<=20; i++) {
	
		a = 1 + rand()%100;
		printf("%d\n", a);
			
		if(a>b)
			b=a;
	}
	
	printf("\nÃÖ´ñ°ª : %d", b);
} 
