#include <stdio.h>
main() {
	
	int i, n, num=0, big=0, small=0, etc=0;
	char ch,yes;
	

	
	do{
	system("cls");
	printf("문자열을 입력하면 종류별로 문자의 개수를 출력합니다.\n===================================================\n");
	printf("입력 문자열 => ");
	
	num=0, big=0, small=0, etc=0;	
	
	do{
		ch=getche();
		if(ch>='1'&&ch<='9') num++;
		else if(ch>='a'&&ch<='z') small++;
		else if(ch>='A'&&ch<='Z') big++;
		else if((ch!=13)||(ch<'A'&&ch>'Z')||(ch<'a'&&ch>'z')||(ch<'1'&&ch>'9'))etc++;
	}while(ch!=13);
	

 	printf("\n--------------------------------------------------");
 	printf("\n숫자 : %d, 대문자 : %d, 소문자 : %d, 기타 : %d\n", num, big, small, etc);
 	printf("\n===================================================\n");
 	printf("다시 하겠습니까?(y/n) => ");
 	yes=getche(); printf("\n");
 	}while(yes=='Y'||yes=='y');
	 
}
