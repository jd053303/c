#include <stdio.h>
main (){
	int i, j, pos;
	char st1[50], st2[20], st3[70];
	
	printf("*** ���ڿ� ���� ***\n\n");
	printf("�⺻ ���ڿ� => ");
	gets(st1);
	printf("������ ���ڿ� => ");
	gets(st2);
	printf("������ ��ġ => ");
	scanf("%d", &pos);
	pos=pos-1;
	printf("\n���� ���ڿ� => ");
	for(i=0; i<pos; i++) printf("%c", st1[i]);
	printf("%s", st2);
	for(i=pos; st1[i]!=NULL; i++) printf("%c", st1[i]);
}
