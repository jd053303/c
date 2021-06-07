#include <stdio.h>
main () {
	char ch;
	
	printf(" ID : ");
	ch = getche();
	while (ch != 13)
		ch=getche();
		putchar("\n");
	
	printf("\n PASSWD : ");
	ch=getch();
	putchar('*');
	while (ch != 13) {
		ch=getch();
		putchar('*');
	}
}
