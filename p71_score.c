//�ڷ� �����(p71_score)
#include <stdio.h>
main() {
	int kor, eng, mat, sum;
	float avg;
	
	printf("����, ����, ���� ������ �Է��Ͻÿ�.=>");
	scanf("%d %d %d", &kor, &eng, &mat);
	sum=kor+eng+mat;
	avg=(float)sum/3;
	printf("-------------------------------------------");
	printf("���� : %d\n",sum);
	printf("��� : %.2f",avg);
} 
