#include <stdio.h>
main() {
	int i=0;
	char st[20];
	
	printf("** ���ڿ��� ���� ***\n\n");
	 printf("���ڿ� => ");
	 gets(st);
	 while(st[i]!='\0'){
	 	i++;
	 }
	 printf("���ڿ��� ���� => %d ����", i);
}
