//////////����-2798��////////////
//n��(3~100)�� ����ī�� �� m�� ��(10~300000)�� ���� ������ īƮ 3���� �̾� ���//  
#include <stdio.h>
main() {
	srand(time(NULL));
	int su, m, i, j, z, a, b=10;
	int n[101];
	
	m=10+rand()%2999901;
	su=3+rand()%98;
	for(i=1; i<=su; i++) {
		n[i]=3+rand()%98;	
		for(j=1; j<=i; j++){
			if(j==1) break;
			if(n[j]==n[i]) i-=1;
		}
	}
	printf("%d %d\n",su,m);
	for(i=1; i<=su; i++) {
		printf("%d ",n[i]);
	}
	for(i=1; i<=su; i++){
		for(j=i+1; j<=su; j++){
			for(z=j+1; z<=su; z++){
				a=n[i]+n[j]+n[z];
				if(b<=a&&a<=m) {
					b=a;
				}
			}
		}
	}
	if(b!=0) printf("\n\n%d", b);
}
