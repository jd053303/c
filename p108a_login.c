#include <stdio.h>
main () {
	char ch;
	
	printf(" ID : ");

	do{	
		ch = getche();
		putchar("\n");
		}while(ch != 13);

	
	
	printf("\n PASSWD : ");

	do{	
		ch=getch();
		putchar('*');
		}while(ch != 13);

}
