#include <stdio.h>
#include <string.h>
main() {
	int i, pos;
	char st1[40], st2[20];
	
	printf("*** ���ڿ� ���� ***\n");
	printf("���� => ");
	gets(st1);
	printf("�߰� => ");
	gets(st2);
	printf("��ü => ");
	pos=strlen(st1);
	for(i=0; st2[i]!=NULL; i++)
		st1[pos+i]=st2[i];
	st1[pos+i]=NULL;
	printf("��ü => %s", st1);
}
