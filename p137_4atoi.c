#include <stdio.h>
main() {
	int i, num=0;
	char st[20];
	
	printf("*** ������ ���ڿ� ���� ��ȯ ***\n\n");
	printf("���ڿ� => ");
	gets(st);
	
	for(i=0; st[i]>='0' && st[i]<='9'; i++)
		num=num*10+(st[i]-'0');
	 printf("��  �� => %d",num);
	
	/*for(i=0; st[i]!=NULL; i++){
		printf("%d", st[i]);*/

}
