#include <stdio.h>

main() {
	
	int i, a, b;
	
	printf("���ڸ� �Է��Ͻÿ�.(2~9) => ");
	scanf("%d",&a);
	
	if(a>9||a<1) 
		printf("\n�߸� �Է��Ͽ����ϴ�!!!!");
	
	else
	{
		printf("\n======= %d�� =======\n",a);
	
		for(i=2; i<=9; i++) {
		
		b=a*i;
		
		printf("%d X %d = %d\n", a, i, b);
		}
	}
}
