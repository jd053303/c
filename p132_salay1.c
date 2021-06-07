#include <stdio.h>
#define NO 20
#define DAILY 80000
#define EXTRA 15000
#define TAX 0.07
#define HEALTH 0.05
#define PENSION 0.06
#define FIELD 9

main () {
	int n, i, p[NO][FIELD];
	
	srand(time(NULL));
	for(n=0; n<NO; n++) {
		p[n][0]=15+rand()%11;
		p[n][1]=rand()%26;
	}	
	
	for(n=0; n<NO; n++) {
		p[n][2]=p[n][0]*DAILY;
		p[n][3]=p[n][1]*EXTRA;
		p[n][4]=p[n][2]+p[n][3];
		p[n][5]=p[n][4]*TAX;
		p[n][6]=p[n][4]*HEALTH;
		p[n][7]=p[n][4]*PENSION;
		p[n][8]=p[n][4]-p[n][5]-p[n][6]-p[n][7];
	}
	
	printf("\t\t\t\t9�� ���� ����\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("���  �ٹ�  �ʰ�   �ӱ�     �ʰ�     �޿�     ����     �ǰ�     ����    ��  ��\n");
	printf("��ȣ  �ϼ�  �ٹ�   �Ѿ�     ����     �հ�     ����     ����     ����    ���ɾ�\n");
	printf("--------------------------------------------------------------------------------\n");
	
	
	for(n=0; n<NO; n++){
		printf(" %2d    %2d    %2d ", n+1, p[n][0], p[n][1]);
		for(i=2; i<FIELD; i++)
			printf(" %7d ", p[n][i]);
		printf("\n");
		if((n+1)%5==0)
			printf("--------------------------------------------------------------------------------\n");
	}
}
