#include <stdio.h>
main() {
	int n=0, y=0, s=1;
	
	for(n=1; n<=100; n++){
		y=y+s*n;
		s=s*(-1);
	}
	printf("%d", y);
	
}
