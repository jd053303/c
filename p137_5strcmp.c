#include <stdio.h>
main() {
	int t, i, p1, p2, cmp;
	char st1[20], st2[10];
		
	printf("*** ���ڿ� �� ***\n\n");
	printf("���ڿ�1 => ");
	gets(st1);
	printf("���ڿ�2 => ");
	gets(st2);
	for(i=0; st1[i]!=NULL; i++) p1=st1[i];
	for(i=0; st2[i]!=NULL; i++) p1=st2[i];
	
	if(p1>p2) printf("\nù ��° ���ڿ��� �� Ů�ϴ�.");	
	else if (p1<p2) printf("\n�� ��° ���ڿ��� �� Ů�ϴ�.");	
	else printf("\n�����մϴ�."); 
}
