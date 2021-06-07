
//맛보기로 프로그램 작성(p42_test.c)
#include <stdio.h>
main()
{
	int i, sum;
	
	sum=0;
	for(i=0; i<=100; i++)
	    sum=sum+i;
	printf("1~100까지의 합 : %d\n", sum);
	system("pause");	   
 } 
