#include <stdio.h>

main () {
	
	char ch;
	
	printf("주문한 상품 코드 => ");
	//scanf("%c", &ch);
	ch=getche();putchar('\n');
	
	printf("주문한 상품은 ");
	switch(ch) {
		case 'a' :printf("Audio입니다.\n");
				break;
		case 'b':printf("Banana입니다.\n");
				break;
		case 'c' :printf("Car입니다.\n");
				break;
		case 'd':printf("없습니다.\n");
				break;
				
	}
}
