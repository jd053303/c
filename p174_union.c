#include <stdio.h>
main() {
	union student {
		int id;
		int no;
	} s1;
	
	s1.id=1517;
	printf("id=%d, no=%d\n", s1.id, s1.no);
	s1.no=17;
	printf("id=%d, no=%d\n", s1.id, s1.no);
}
