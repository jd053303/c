#include <stdio.h>

main() {
	
	int i, dan;
	char ch, yes;
	
	do{
	
		do {
		system("cls"); //clear screen : ȭ�� �ʱ�ȭ 
		printf("���ڸ� �Է��Ͻÿ�.(2~9) => ");
		ch=getche(); putchar('\n');
		if(ch<'0'||ch>'9') 
		printf("\n�߸� �Է��Ͽ����ϴ�!!!!\n\n");
	}while(ch<'0'||ch>'9');

	
	printf("\n======= %c�� =======\n",ch);
	dan=ch-'0';
	for(i=1; i<=9; i++)
		printf("%d X %d = %2d\n", dan, i, dan*i);
	printf("---------\n");
	printf("�ٽ� �ϰڽ��ϱ�?(y/n) => ");
	yes=getche(); putchar('\n');
	}while(yes =='y'|| yes == 'Y');
	
	
}
