#include <stdio.h>
main() {
	
	int n, s=0;
	
	for(n=5; n<=103; n++) {
		s=s-n;
		if(n>=103) printf("%d",s);
		n=n+1;
		s=s+n;
	}
}
