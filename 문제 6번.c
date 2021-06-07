#include <stdio.h>
main() {
   int a=0,b=0,c=0;
   
   printf("당신이 입력할 점수는? => ");
   do{
   a=getch();
   }while(a<48||a>57); //48=0, 57=9
   printf("%d",a-'0');
   if(a==48)
      printf("\n당신이 입력한 점수는%d점입니다",a-'0');
   if(a>=49){
      do{
      b=getch();
      }while(b!=13&&b<48||b>57);
      if(b!=13)
         printf("%d",b-'0');
   }
   if(b==13)
      printf("\n당신이 입력한 점수는%d점입니다",a-'0');
   if(a==49&&b==48){
      do{
      c=getch();
      }while(c!=13&&c!=48);
      if(c==48)
         printf("%d",c-'0');
   }
   else if(a>=49&&b>=48&&b<=57)
      printf("\n당신이 입력한 점수는%d%d점입니다",a-'0',b-'0');
   if(c==13)
      printf("\n당신이 입력한 점수는%d%d점입니다",a-'0',b-'0');
   if(c==48)
      printf("\n당신이 입력한 점수는%d%d%d점입니다",a-'0',b-'0',c-'0');
}
