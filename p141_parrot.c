#include <stdio.h>
#include <string.h>
main() {
	
	char atr[101];
	int i;
	gets(atr);
	for(i=strlen(atr)-1; i>=0; i--)
		printf("%c",atr[i]);
}
