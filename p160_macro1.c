#include <stdio.h>
#define TWO 2
#define MSG "Teacher Kim has become a old / getleman with grey hair"
#define FOUR TWO * TWO
#define PX printf("X if %d.\n", x)
#define FMT "X is %d, \n"

main() {
	int x=TWO;
	PX;
	x=FOUR;
	printf(FMT, x);
	printf("%s \n", MSG);
	printf("TWO: MSG \n");
}
