#include <stdio.h>
main () {
	int a, i, m1 = 0, m2 =0;
	for(i=0; i<10; i++) {
		scanf("%d", &a);
		if(a%2==1)
			if(a>m1) m1=a;
		if(a%2==0)
			if(a>m2) m2=a; 
	}
	
	if(m2==0) printf("%d", m1);
	else if(m1==0) printf("%d", m2);
	else printf("%d %d", m1, m2);
}
