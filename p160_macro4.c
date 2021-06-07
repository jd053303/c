#include <stdio.h>
#define SQUARE(x) ((x)*(x))
#define PR(x) printf ("x is %d.\n",x)

main() {
	int y=4;
	
	PR(SQUARE(y+2));
	PR(100/SQUARE(2));
} 
