#include <stdio.h>
main() {
	int  i, a[20], s, z=0;
 	
	printf("����� ���ϴ� ������ => ");
	scanf("%d",&s);
	
	srand(time(NULL));
	
	for(i=0; i<20; i++)
		a[i]=1+rand()%100;
	
	printf("==== ���� ��� ====\n\n");
	
	for(i=0; i<20; i++)
		printf("%2d�� ���� => %3d\n", i+1, a[i]);
		
	for(i=0; i<20; i++){
		if(a[i]==s)	z=i+1;
	}
		
	printf("\n\n==== �˻� ��� ��� ====\n");
	if(z==0) printf("\n����� ���ϴ� ������ �����ϴ�.");
	else printf("����� ���ϴ� ������ %d��°���� ã�ҽ��ϴ�.", z);
		
}

