#include <stdio.h>
void f(int *a, int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
main() {
	int a, b, c;
	printf("3����� �����Ը� ���ʷ� �Է��Ͻÿ�. : ");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b)
	f(&a, &b);
	if(b>c)
	f(&b, &c);
	if(a>b)
	f(&a, &b);
	printf("%d %d %d\n",a,b,c);
}
