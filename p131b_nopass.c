#include <stdio.h>
main() {
	int  i, a[20], b=0, c=0;
	
	srand(time(NULL));
	
	for(i=0; i<20; i++)
		a[i]=1+rand()%100;
	
	printf("==== ���� ��� ====\n\n");
	for(i=0; i<20; i++)
		printf("%2d�� ���� => %3d\n", i+1, a[i]);
		
	printf("\n\n==== �հ��� ��� ====");
	for(i=0; i<20; i++){	
		if(a[i]>=70) b++;
		else c++;
	}
	
	printf("\n�հ��ڴ� %d�� �̰�, ���հ��ڴ� %d�� �Դϴ�.", b, c); 
}
