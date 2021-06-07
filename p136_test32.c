#include<stdio.h>
#define NO 12
#define FIELD 5

main() {
	int j,i;
	char *item[NO]={"사과","배","귤","감","딸기","포도","수박","참외","복숭아","토마토","바나나","멜론"};
	int fruit[NO][FIELD], m_price, max[FIELD]={0};
	
	srand(time(NULL));
	
	for(i=0; i<NO; i++){
		*(*(fruit+i)+0)= 4000+rand()%3001;
		*(*(fruit+i)+1)= *(*(fruit+i)+0)+(1000+rand()%1001);
		*(*(fruit+i)+2)= 50+rand()%51;
		*(*(fruit+i)+3)= *(*(fruit+i)+1)**(*(fruit+i)+2);
		*(*(fruit+i)+4)= (*(*(fruit+i)+1)-*(*(fruit+i)+0))**(*(fruit+i)+2);
	} 
	
	for(j=0; j<FIELD; j++){
		m_price=0;
		for(i=0; i<NO; i++){
			if(	m_price<*(*(fruit+i)+j)){
				m_price=*(*(fruit+i)+j);
			   *(max+j)=*(item+i);
			}
		}
	}
	
	printf("   수정 청과물 상회 판매 현황\n");
	printf("\n\t\t\t\tSep 20"); 
	printf("\n=========================================\n");
	printf("품목   원가  소매가  판매량 판매액  이윤\n");
	printf("-----------------------------------------\n");
	for(i=0; i<NO; i++){
		printf("%-8s %4d  %4d   %3d  %6d  %6d", item[i], *(*(fruit+i)+0),*(*(fruit+i)+1),*(*(fruit+i)+2),*(*(fruit+i)+3),*(*(fruit+i)+4));
		if(i!=0&&i%4==0) printf("\n-----------------------------------------\n");
		else printf("\n");
	}
	printf("------------------------------------------\n");
	printf("최고품목 ");
	for(i=0; i<FIELD; i++){
		printf("%5s ", *(max+i));
	}
	
	printf("\n=========================================\n");
	
	
	
	
}
