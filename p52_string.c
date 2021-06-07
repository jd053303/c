//¹®ÀÚ¿­(p52_string.c)
#include <stdio.h>
main() {
	char a[5]={'K', 'O', 'R', 'E', 'A'};
	printf("%c\n", a[1]);
	printf("%s\n", a);
	
	char b[6]={'K', 'O', 'R', 'E', 'A', '\0'};
	printf("%s\n", b);
	
	char c[6]="KOREA";
	printf("%s\n", c);
	
	char d[]="KOREA";
	printf("%s\n", d);
} 
