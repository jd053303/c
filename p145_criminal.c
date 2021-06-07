#include <stdio.h>
main() {
	int n, sum =0;
	printf("용의자의 DNA 정보를 입력하세요. : ");
	scanf("%d",&n);
	while(n!=0){
		sum += n%10;
		n=n/10;
	}
	if(sum%7==4) printf("범인\n");
	else printf("일반인\n");
}
