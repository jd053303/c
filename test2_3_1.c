#include <stdio.h>
#define NO 20

main() {
	
	int i, a[NO], sum=0, max=0, min=100, odd=0, even=0;
	float avg;
	
	srand(time(NULL));
	
	printf("1. ºô¼ÄµÈ ³­¼ö => ");
	
	for(i=0; i<20; i++) {
		
		a[i] = 40+rand()%61;
		if(i==19) printf("%d", a[i]);
		else printf("%d, ", a[i]);
		
		sum = sum + a[i];
		
		avg = (float)sum/20;
		
		if(max<=a[i]) max=a[i];
		else if(min>=a[i]) min=a[i];
		
		if(a[i]%2==0) odd++;
		else even++;
	}
	
	
	
	printf("\n\n2. 3°ú 5ÀÇ ¹è¼öÀÎ ¼ö  => ");
	for(i=0; i<20; i++) {
			if((a[i]%3==0)&&(a[i]%5==0)) printf("%d, ", a[i]);
	}
	printf("\b\b ");
	
	

	printf("\n\n3. ÃÑÁ¡°ú Æò±Õ : %d, %.2f", sum, avg);
	printf("\n\n4. ÃÖ´ñ°ª°ú ÃÖ¼Ú°ª : %d, %d", max, min);
	printf("\n\n5.È¦¼ö¿Í Â¦¼öÀÇ °³¼ö : %d, %d",even, odd);
}
