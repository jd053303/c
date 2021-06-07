#include<stdio.h>
main() {
	int L=0, H=9, M;
	int num, a[10]={1,3,6,7,9,10,13,15,16,18};
	
	printf("찾을 숫자를 입력하세요 => ");
	scanf("%d", &num);

	do{	
		M=(L+H)/2;
		if(num==a[M]) break;
		else if(num>a[M]) L=M+1;
		else if(num<a[M]) H=M-1;
	}while(L>H);
	if(num==a[M]) printf("\n%d번째 위치에 있씁니다.", M+1);
	else printf("\n입력한 자료는 존재하지 않습니다.");
}
