#include<stdio.h>
main() {
	int L=0, H=9, M;
	int num, a[10]={1,3,6,7,9,10,13,15,16,18};
	
	printf("ã�� ���ڸ� �Է��ϼ��� => ");
	scanf("%d", &num);

	do{	
		M=(L+H)/2;
		if(num==a[M]) break;
		else if(num>a[M]) L=M+1;
		else if(num<a[M]) H=M-1;
	}while(L>H);
	if(num==a[M]) printf("\n%d��° ��ġ�� �־��ϴ�.", M+1);
	else printf("\n�Է��� �ڷ�� �������� �ʽ��ϴ�.");
}
