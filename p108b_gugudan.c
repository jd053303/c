#include <stdio.h>

main() {
	
	int i, dan;
	char ch;
	
	printf("���ڸ� �Է��Ͻÿ�.(2~9) => ");
	ch=getche();
		putchar('\n');
	
	
		printf("\n======= %c�� =======\n",ch);
		dan=ch-'0';
		for(i=1; i<=9; i++)
		printf("%d X %d = %2d\n", dan, i, dan*i);
}
