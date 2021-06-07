#include <stdio.h>
main() {
	
	int i, small=0, big=0, n;
	char ch, yes;
	
	do{
	system("cls");
	printf("입력할 문자 수 => ");
	
	scanf("%d",&n); 
	
	printf("입력하세요 => ");
	
	for(i=1; i<=n; i++){
		do{
		ch=getch();
		}while((ch<'A'||ch>'Z')&&(ch<'a'||ch>'z'));
		printf("%c", ch);
		if(ch>='A'&&ch<='Z') big++;
		else small++;
	}
	
	
	printf("\n\n소문자 : %2d\n대문자 : %2d",small, big);
	
	
	printf("\n다시 하시겠습니까?(y/n) => ");
	yes=getche();
	}while(yes=='Y'||yes=='y');
}

