#include <stdio.h>
main() {
	int  i, s[20], w=0, q=0;
	
	srand(time(NULL));
	
	for(i=0; i<20; i++)
		s[i]=1+rand()%100;
	
	printf("==== ���� ��� ====\n\n");
	for(i=0; i<20; i++)
		printf("%2d�� ���� => %3d\n", i+1, s[i]);
		

	for(i=0; i<20; i++){	
		if(s[i]>=90) {
			if(s[i]>w){
			w=s[i];
			q=i+1;
			}			
		}
	}
	
	printf("\n=====�ְ� ������=====\n��ȣ : %d, ���� : %d", q, w); 
}
