#include <stdio.h>
#define NO 10
main(){
	srand(time(NULL));
	
	int i, j=0, a, s[NO], p[NO];
	
	for(i=0; i<NO; i++) s[i]=1+rand()%9;
	
	for(i=0; i<NO; i++) p[i]=0;
	
	printf("�˻��� ���ڸ� �Է��Ͻÿ� => ");
	do{
		a=getch()-'0';
	}while(a<1||a>9);
	
	printf("%d",a);
	
	
	for(i=0; i<NO; i++){
		if(s[i]==a) {
			p[i]=i+1;
			j=1;
		}
	}

	if(j==1){
		printf("\n%d(��) �迭��",a);
		for(i=0; i<NO; i++){
			if(p[i]!=0) printf(" %d", i+1);
		}	 
		printf("��°�� ��ġ�մϴ�.");
	}
	
	else if(j==0) printf("\n�Է��� �ڷᰡ �������� �ʽ��ϴ�.");
		
	printf("\n���� => ");
	for(i=0; i<NO; i++) printf("%d ", s[i]);
}



//2���̻� ���X 
/*#include <stdio.h>
#define NO 10
main(){
	srand(time(NULL));
	
	int i, j=0,a=0, b=0, x, s[10];
	 
	
	for(i=0; i<NO; i++){
		s[i]=1+rand()%9;
	}
	
	printf("�˻��� ���ڸ� ������ �Է��Ͻÿ� : ");
	do{
		x=getch()-'0';
	}while(x<1||x>9);
	printf("%d", x);
	
	for(i=0; i<NO; i++){
		if(a==0&&s[i]==x){
			a=i;
			j=1;
		}
		if(a!=0&&s[i]==x){
			b=i;
		}
	}
	
	if(j==1){
	 printf("\n%d(��) �迭�� %d",x,a+1);
	 if(a!=b&&b!=0) printf(" ,%d", b+1);
	 printf("��°�� ��ġ�մϴ�.");
	}
	if(j==0) printf("\n�Է��� �ڷᰡ �������� �ʽ��ϴ�.");
	printf("\n�� �� => ");
	for(i=0; i<NO; i++) printf("%d ", s[i]);
}*/
