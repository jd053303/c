#include <stdio.h>
#include <stdbool.h>
bool f(int y)
{
	if(y%400==0)
	return true;
	else if(y%4==0&&y%100!=0)
	return true;
	else
	return false;
}

main() {
	int y;
	scanf("%d",&y);
	if(y==0)
	printf("À±³â");
	else
	printf("Æò³â");
}
