#include <stdio.h>
#define NO 10
main() {
	char n, i,j;
	char*grade[6]={"사원","대리","과장","차장","부장","이사"};
	int salary[NO][5], sub[6][4]={{1500,200,1400,5},{2100,300,2000,7},{2500,500,2300,10},
						{3200,600,3100,15},{3700,700,3300,20},{4500,900,4300,25}};
						
	char name[NO][9];
	int code[NO];
	
	for(i=0; i<NO; i++) {
		printf("%2d. 이름 => ", i+1);
		scanf("%s", name[i]);
		printf("   직급 => ");
		do{
			code[i]= getch()-'0';
		}while(code[i]<1||code[i]>6);
		printf("%d", code[i]);
		printf("\n");
	}
	
	for(i=0; i<NO; i++){
		for(j=0; j<=3; j++){
		 salary[i][j]=sub[code[i]-1][j];
		 salary[i][4]=salary[i][0]+salary[i][1]+salary[i][2];
		 salary[i][5]=salary[i][4]-salary[i][3]*(salary[i][3]/100);
		}
	}
	
	
	
	
	printf("=== 입직원 개인정보 입력 ===\n");
	for(i=0; i<NO; i++) {
		printf("%2d %-8s %4s", i+1, name[i], grade[code[i]-1]);
		printf("\n");
	}
	
}
