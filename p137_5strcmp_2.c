#include <stdio.h>
main() {
	int t, i, p1, p2, cmp;
	char st1[20], st2[10];
		
	printf("*** ���ڿ� �� ***\n\n");
	printf("���ڿ�1 => ");
	gets(st1);
	printf("���ڿ�2 => ");
	gets(st2);
	cmp=strcmp(st1 ,st2);
	if(cmp==0) printf("\n�� ��° ���ڿ��� �����մϴ�.");
	else if(cmp >0)	printf("\nù ��° ���ڿ��� �� Ů�ϴ�.");	
	else printf("\n�� ��° ���ڿ��� �� Ů�ϴ�.");
}
