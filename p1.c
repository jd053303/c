#include <stdio.h>
main() {
	int d;
	float m, s=1;
	
	for(d=2; d<=10; d++) {
		m=m+1;
		s=s+m/d;
	}
	
	printf("%.2f", s);
}
