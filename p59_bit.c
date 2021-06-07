//비트 연산(p59_bit)	
#include <stdio.h>
main() {
	int a=6, b=5;
	
	printf("a=%d(0110)\n",a);
	printf("b=%d(0101)\n",b);
	printf("---------------------\n");
	printf("a&b=%d, a|b=%d, a^b=%d\n",a&b, a|b, a^b);
	printf("~a=%d, a<<1=%d, a>>1=%d",~a, a<<1, a>>1);
}
 
