#include <stdio.h>
main () {
	int i, n, big, small, smalla, biga;
	char ch, yes;
	
	
	small=0;
	big=0;
	do{
	system("cls");
	
	printf("�����ڸ� �Է��ϸ� ��.�ҹ����� ������ ����մϴ�.\n\n");
	printf("�Է��� ������ ������? => ");
	scanf("%d", &n);

	printf("\n===========================\n");
	

	for(i=1; i<=n; i++) {
		printf("%d => ", i);  
	 	
	 	do{
		 
	 		do{
	 			ch = getche();
	 		
				if(ch>='a'&&ch<='z'){
					small=small+1;
					smalla=1;
					}
				else if(ch>='A'&&ch<='Z'){
					big=big+1;
					biga=1;
				}	
			}while(smalla=0&&biga==0);
		while((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'));
		
		smalla=0;
		biga=0;
			
		printf("\n");
	}

	printf("\n---------------------------\n");
	
	printf("�빮�� : %d,  �ҹ��� : %d", big, small);
	
	printf("\n===============================\n");
	printf("�ٽ� �ϰڽ��ϱ�?(y/n) =>");
	yes=getche();
	putchar('\n');
	}while(yes=='y'||yes=='Y');
	

	
}


