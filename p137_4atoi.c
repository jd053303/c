#include <stdio.h>
main() {
	int i, num=0;
	char st[20];
	
	printf("*** 숫자형 문자열 정수 변환 ***\n\n");
	printf("문자열 => ");
	gets(st);
	
	for(i=0; st[i]>='0' && st[i]<='9'; i++)
		num=num*10+(st[i]-'0');
	 printf("정  수 => %d",num);
	
	/*for(i=0; st[i]!=NULL; i++){
		printf("%d", st[i]);*/

}
