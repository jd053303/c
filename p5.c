#include <stdio.h>
main() {
	int  i, a, b, c, su2, su3;
	
	scanf("%d", &su2);
	scanf("%d", &su3);
	
	for(i=1; i<=100; i++) {
		a=i%su2;
		b=i%su3;
		c=a+b;
		if(c==0) printf("%d ", i);
		c=0;	 
 }
	printf("\b\b");
}
