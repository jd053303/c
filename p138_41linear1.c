#include <stdio.h>
#define NO 10
main(){
	srand(time(NULL));
	
	int i, j=0, x, s[10];
	 
	
	for(i=0; i<NO; i++){
		s[i]=1+rand()%9;
	}
	
	printf("�˻��� ���ڸ� ������ �Է��Ͻÿ� : ");
	do{
		x=getch()-'0';
	}while(x<1||x>9);
	printf("%d", x);
	
	for(i=0; i<NO; i++){
		if(s[i]==x){
		 printf("\n%d(��) �迭�� %d��°�� ��ġ�մϴ�.",x,i+1);
		 j=1;
		 break;
		}
	}

	if(j==0) printf("\n�Է��� �ڷᰡ �������� �ʽ��ϴ�.");
	
	printf("\n�� �� => ");
	for(i=0; i<NO; i++) printf("%d ", s[i]);
	
	
}
