#include <stdio.h>
main() {
	int  i, s[20], a=0, b=0, c=0, d=0, e=0, w=0;
	
	srand(time(NULL));
	
	for(i=0; i<20; i++)
		s[i]=1+rand()%100;
	
	printf("==== ���� ��� ====\n\n");
	for(i=0; i<20; i++)
		printf("%2d�� ���� => %3d\n", i+1, s[i]);
		
	printf("\n\n==== ���û� ���  ====\n");
	for(i=0; i<20; i++){	
		if(s[i]>=90) {
			a++;
			if(s[i]>w) w=s[i];
		}
		else if(s[i]>=80) b++;
		else if(s[i]>=70) c++;
		else if(s[i]>=60) d++;
		else e++;
	}
	
	printf("A���:%d�� B���:%d�� C���:%d�� D���:%d�� E���:%d��\n\n====�ִ�====\n      %d", a, b, c, d, e,w); 
}
