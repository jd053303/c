#include <stdio.h>
main() {
	
	int i, s=(-1), sum;
	
	for(i=1; i<=100; i++){
		s=s*i;
		sum=sum+i;
	}
	printf("%d",sum);
}
