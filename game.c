#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

//////////////  �� �� ���� ������ ���ϸ� 254���� 0�� 15�� ����     /////////////////////
/////////////                        +                             /////////////////////
///////////// ������ ���鼭 ������ �ϰ�ʹٸ� 46���� 0�� 15�� ���� /////////////////////

void gotoxy(int x, int y)
{
	COORD cc = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cc);
}

void cursor(int n) 
{
    HANDLE c;
    CONSOLE_CURSOR_INFO ConsoleCursor;
 
    c = GetStdHandle(STD_OUTPUT_HANDLE);
 
    ConsoleCursor.bVisible = n;
    ConsoleCursor.dwSize = 1;
 
    SetConsoleCursorInfo(c , &ConsoleCursor);
}

void remove_scrollbar()
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(handle, &info);
    COORD new_size = 
    {
        info.srWindow.Right - info.srWindow.Left + 1,
        info.srWindow.Bottom - info.srWindow.Top + 1
    };
    SetConsoleScreenBufferSize(handle, new_size);
}

ab(int a, int b, int c, int aa){
	gotoxy(55,22+aa);
	if(a==b||b==c||c==a) aa--;
	else{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf("%d %d %d\n",a,b,c);
	}
	return aa;
}
//////Ÿ�� �ֱ� 
tile(int *a, int f){
	int i;
	for(i=0; i<2; i++){
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf("	  ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),*(a+(1+f)));
		printf("          ");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf(" "); 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), *(a+(2+f)));
		printf("          ");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf(" ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), *(a+(3+f)));
		printf("          ");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf(" \n");
	}	
} 
////////���� �ֱ� 
spch(int *a, int *b, int f){
	int i;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf("	  ");
	for(i=1; i<4; i++){
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), *(a+(i+f)));
		printf("    ");
		printf("%s",*(b+(i+f)));
		printf("    ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf(" ");
	}
	printf("\n");
}
///////�� ���� Ÿ�� �ֱ� 2
tile2(int *a, int f){
	int i;
	for(i=0; i<2; i++){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf("	  ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),*(a+(1+f)));
		printf("          ");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf(" ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), *(a+(2+f)));
		printf("          ");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf(" ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), *(a+(3+f)));
		printf("          ");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf(" \n");
	}

	f=f+3;
	return f;
} 
////////////////////////////////////////////////////////////���� ȭ�� 
maingame(int ht, int sco, int best, int t, int btt){
	
	srand(time(NULL));

	int backclr[10], pntclr[10], totclr[10], ch[10];
	int q=0,w=0,e=0, clr=0, i, j,z,htc=0, aa=0, tt,hh=0,mis=0, a, b, c, f=0, cha;
	
	system("cls");
	cursor(1);
	do{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		gotoxy(4,3);
		printf("    SCORE   :%3d", sco);
		gotoxy(33,3);
		printf("BEST SCORE :%3d", best);
		do{
			do{
				a=b=c=0;
				for(i=1; i<10; i++){
					pntclr[i]=1+rand()%3;
					if(pntclr[i]==1) {
					pntclr[i]=1;		a++;
					}
					if(pntclr[i]==2) { 
					pntclr[i]=10;		b++;
					}
					if(pntclr[i]==3) {
					pntclr[i]=12;       c++;
					}
				}
			}while(a==0||b==0||c==0);
	
	 		a=0, b=0, c=0;
			do{
				a=b=c=0;
				for(i=1; i<10; i++){
					ch[i]=1+rand()%3;
					if(ch[i]==1) {
						ch[i]="��";		a++;
					}
					if(ch[i]==2) {
						ch[i]="��";		b++;
					}
					if(ch[i]==3) {
						ch[i]="��"; 	c++;}
					}
			}while((a*b*c)!=24);
	 
			do{ 
				a=b=c=0;
				for(i=1; i<10; i++){
					backclr[i]=1+rand()%3;
					if(backclr[i]==1) {
						backclr[i]=224;		a++;
					}
					if(backclr[i]==2) {
						backclr[i]=128;		b++;
					}
					if(backclr[i]==3) {
						backclr[i]=240; 	c++;
					}
				}
			}while(a==0||b==0||c==0);
	
			for(i=1; i<10; i++){
				totclr[i]=pntclr[i]+backclr[i];
			}
		
			tt=0;
			for(i=1; i<9; i++){
				for(j=i+1; j<10; j++){			
					if(totclr[i]==totclr[j]){
						if(ch[i]==ch[j]) tt=1;
					}
				}
			}
	
		}while(tt==1);

	///////////���� �� ���ϱ� 
		aa=0;
		for(i=1; i<8; i++){
			for(j=i+1; j<9; j++){
				for(z=j+1; z<10; z++){
					if(ch[i]==ch[j]&&ch[i]==ch[z]){
						if(backclr[i]==backclr[j]&&backclr[i]==backclr[z]){
							if(pntclr[i]==pntclr[j]&&pntclr[i]==pntclr[z]){
								aa++;
								aa=ab(i,j,z,aa); }
							if(pntclr[i]!=pntclr[j]&&pntclr[j]!=pntclr[z]&&pntclr[z]!=pntclr[i]) {
								aa++;
								aa=ab(i,j,z,aa); }
						}		
						if(backclr[i]!=backclr[j]&&backclr[j]!=backclr[z]&&backclr[z]!=backclr[i]){
							if(pntclr[i]==pntclr[j]&&pntclr[i]==pntclr[z]){
								aa++;
								aa=ab(i,j,z,aa); }
							if(pntclr[i]!=pntclr[j]&&pntclr[j]!=pntclr[z]&&pntclr[z]!=pntclr[i]) {
								aa++;
								aa=ab(i,j,z,aa); }
						}
					}
					
					if(ch[i]!=ch[j]&&ch[j]!=ch[z]&&ch[z]!=ch[i]){
						if(backclr[i]==backclr[j]&&backclr[i]==backclr[z]){
							if(pntclr[i]==pntclr[j]&&pntclr[i]==pntclr[z]){
								aa++;
								aa=ab(i,j,z,aa); }
							if(pntclr[i]!=pntclr[j]&&pntclr[j]!=pntclr[z]&&pntclr[z]!=pntclr[i]) {
								aa++;
								aa=ab(i,j,z,aa); }
						}		
						if(backclr[i]!=backclr[j]&&backclr[j]!=backclr[z]&&backclr[z]!=backclr[i]){
							if(pntclr[i]==pntclr[j]&&pntclr[i]==pntclr[z]){
								aa++;
								aa=ab(i,j,z,aa); }
							if(pntclr[i]!=pntclr[j]&&pntclr[j]!=pntclr[z]&&pntclr[z]!=pntclr[i]) {
								aa++;
								aa=ab(i,j,z,aa); }
						}
					}
				}
			}
		}
	}while(aa<-1);	

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
	gotoxy(22,30);
	printf("���� : %d\n\n",aa);
	
	//////////////�׸� ����Ʈ 
		gotoxy(7,10);
		tile(totclr,f);
		spch(totclr, ch,f);
		f=tile2(totclr,f);
		printf("\n");
		tile(totclr,f);
		spch(totclr, ch,f);
		f=tile2(totclr,f);
		printf("\n");
		tile(totclr,f);
		spch(totclr, ch,f);
		f=tile2(totclr,f);
		
	///////////�׸� ��ġ ��ȣ 	
	gotoxy(10,10);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), backclr[1]+7);
	printf("��");
	gotoxy(21,10);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), backclr[2]+7);
	printf("��");
	gotoxy(32,10);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), backclr[3]+7);
	printf("��");
	gotoxy(10,16);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), backclr[4]+7);
	printf("��");
	gotoxy(21,16);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), backclr[5]+7);
	printf("��");
	gotoxy(32,16);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), backclr[6]+7);
	printf("��");
	gotoxy(10,22);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), backclr[7]+7);
	printf("��");
	gotoxy(21,22);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), backclr[8]+7);
	printf("��");
	gotoxy(32,22);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), backclr[9]+7);
	printf("��");

	//////////////////////////////////////////// �ߺ� ���� 
	int over, ov, ove;
	int	qq[15], ww[15], ee[15];
	
	for(over=1; over<15; over++){
		qq[over]=0;
		ww[over]=0;
		ee[over]=0;	
	}
	
	over=1;
	
	int x, y=10;
   /////////////////////////////////////////�Է¶� 
	for(i=0; i<10000000000; i++){
			x=50;
			y=12;
			gotoxy(x, y);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			printf("--------------------");
		do{	
			 q=NULL,w=NULL,e=NULL;
			heart2(ht);
			
			x=55;
			y--;
			gotoxy(x,y);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			
			do{			
				q=getch()-'0';
				if(q==72) {
					printf("   x   "); break;
				}
			}while(9<q||q<1);
				if(q!=72) {
					qq[over]=q;
					printf("%d  ",q);
				}
			do{
				if(q==72) break;
				w=getch()-'0';
			}while(q==w||9<w||w<1);
			if(q!=72) {
				ww[over]=w;
				printf("%d  ",w);
			}
	
			do{
				if(q==72) break;
				e=getch()-'0';
			}while(q==e||w==e||9<e||e<1);
			if(q!=72){
				ee[over]=e;
				printf("%d  ",e);
			}
			
			ove=0;
			
			for(ov=1; ov<over; ov++){
				if(qq[over]==qq[ov]&&ww[over]==ww[ov]&&ee[over]==ee[ov]) ove=1;
			}
			/////���� �Ǻ� 
			if(ove!=1&&ch[q]==ch[w]&&ch[w]==ch[e]){
				if(backclr[q]==backclr[w]&&backclr[w]==backclr[e]){
					if(pntclr[q]==pntclr[w]&&pntclr[w]==pntclr[e]){
						clr++;
						sco++;
					}
					if(pntclr[q]!=pntclr[w]&&pntclr[w]!=pntclr[e]&&pntclr[q]!=pntclr[e]){
						clr++;
						sco++;
					}
				}
				if(backclr[q]!=backclr[w]&&backclr[w]!=backclr[e]&&backclr[q]!=backclr[e]){
					if(pntclr[q]==pntclr[w]&&pntclr[w]==pntclr[e]){
						clr++;
						sco++;
					}
					if(pntclr[q]!=pntclr[w]&&pntclr[w]!=pntclr[e]&&pntclr[q]!=pntclr[e]){
						clr++;
						sco++;
					}
				}
			}
			if(ove!=1&&ch[q]!=ch[w]&&ch[w]!=ch[e]&&ch[q]!=ch[e]){
				if(backclr[q]==backclr[w]&&backclr[w]==backclr[e]){
					if(pntclr[q]==pntclr[w]&&pntclr[w]==pntclr[e]){
						clr++;
						sco++;
					}
					if(pntclr[q]!=pntclr[w]&&pntclr[w]!=pntclr[e]&&pntclr[q]!=pntclr[e]){
						clr++;
						sco++;
					}
				}
				if(backclr[q]!=backclr[w]&&backclr[w]!=backclr[e]&&backclr[q]!=backclr[e]){
					if(pntclr[q]==pntclr[w]&&pntclr[w]==pntclr[e]){
						clr++;
						sco++;
					}
					if(pntclr[q]!=pntclr[w]&&pntclr[w]!=pntclr[e]&&pntclr[q]!=pntclr[e]){
						clr++;
						sco++;
					}
				}
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			gotoxy(4,3);
			printf("    SCORE   :%3d", sco);
			
			over++; 
			if(clr==aa&&q==72) clr++;
		
			if(htc==clr){
				ht=heart(ht, sco, best, t, btt, time);
			}
			htc=clr;
			
			x=50;
			y=y+3;
			gotoxy(x, y);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			printf("--------------------");
			
		}while(clr!=aa+1);
			sco=sco+3;
			system("cls");
			maingame(ht, sco, best, t, btt);
	}
	
}

bestscore(int a, int score){
	int best;
	
	FILE *bestscore;
	
	if(a==0){
		bestscore = fopen("bestscore.dat", "r");
		fscanf(bestscore, "%d" , &best);
	}
	if(a==1){
		bestscore = fopen("bestscore.dat", "wt");
		fprintf(bestscore, "%d", score);
		fclose(bestscore);
	}

	return best;
}

best_t(int a, int time){
	int best_time;
	
	FILE *best_t;
	
	if(a==0){
		best_t = fopen("best_t.dat", "r");
		fscanf(best_t, "%d" , &best_time);	
	}
	
	if(a==1){
		best_t = fopen("best_t.dat", "wt");
		fprintf(best_t, "%d", time);
		fclose(best_t);
	}
	return best_time;
}

ttt(int a, int t, int tt){
	
	if(a==1){
      t = clock();
      return t;
    }
    
	if(a==0){
		tt = clock();
		
		int duration=0;
        duration = (tt-t)/CLOCKS_PER_SEC;
        return duration;
	}
}

gameover(int sco, int best, int t, int btt, int time){
	int  enter;
	system("cls");
	cursor(0);
	
	gotoxy(0,2);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
	printf("                     ");
	
	gotoxy(29,12);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("  SCORE    : %-3d\n", sco);
	time=ttt(0, t, NULL);
	gotoxy(29,14);
	printf("PLAY  TIME :%2d m  %2d s\n", (time/60), (time%60));

	if(sco>best){
		
		best=sco;
		btt=time;
		gotoxy(29,18);
		printf("BEST SCORE : %-3d", sco);
		gotoxy(29,20);
		printf("PLAY  TIME :%2d m  %2d s\n", (time/60), (time%60));
		gotoxy(34,7);
		printf("�����մϴ�!!!");
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		gotoxy(5,13);
		printf("   ��    ��    ��");
		gotoxy(5,15);
		printf("  ���  ���  ���");
		gotoxy(5,16);
		printf("  ���������");
		gotoxy(5,17);
		printf("  ���������");
		gotoxy(5,18);
		printf("  ���������");
		
		gotoxy(55,13);
		printf("   ��    ��    ��");
		gotoxy(55,15);
		printf("  ���  ���  ���");
		gotoxy(55,16);
		printf("  ���������");
		gotoxy(55,17);
		printf("  ���������");
		gotoxy(55,18);
		printf("  ���������");
		
		bestscore(1, sco);
		best_t(1, time);
	}
	else {
		gotoxy(29,18);
		printf("BEST SCORE : %-3d", best);
		gotoxy(29,20);
		printf("PLAY  TIME :%2d m  %2d s\n\n\n\n\n\n\n", (btt/60), (btt%60));
	}
	
	while(1){
		Sleep(1000);
		gotoxy(23,31);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
		printf("�Ѹ���ȭ������ ���ư����� ENTER��");
		
		enter=getch();
		if(enter==13){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
			system("cls"); 
			firstscreen(best, btt, 3, sco, time);	
		}	
	}
}

heart(int a, int b, int c, int t, int btt, int time){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	if(a==3)printf("  X\n");	
	if(a==2)printf("  X\n");
	if(a==1) gameover(b,c, t, btt, time);

	a--;
	return a;		
}

heart2(int hh){
	gotoxy(58,3);
	if(hh==3){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf("LIFE : ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("�� �� ��");
	}
	if(hh==2){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf("LIFE : ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("�� ��        ");
	}
	if(hh==1){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf("LIFE : ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		printf("��          ");
	}
}

maintile(){
	int i, y=3;
	for(i=0; i<2; i++){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),192);
		printf("     ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf(" "); 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 128);
		printf("     ");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf(" ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		printf("     ");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf("\n");
		gotoxy(31,y);
	}	
	printf("\n");
	y=5;
	gotoxy(31,y);
	for(i=0; i<2; i++){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128);
		printf("     ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf(" "); 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		printf("     ");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf(" ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 32);
		printf("     ");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf("\n");
		y++;
		gotoxy(31,y);
	}
	printf("\n");
		y++;
		gotoxy(31,y);
	for(i=0; i<2; i++){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),145);
		printf("     ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf(" "); 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 224);
		printf("     ");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf(" ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128);
		printf("     ");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf(" \n");
			y++;
		gotoxy(31,y);
	}
}

firstscreen(int best, int btt, int ht, int score, int time){
	int t, tt;
	ht=3;
	cursor(0);
	int key=0, i, kk=0; 
	gotoxy(31,2);
	maintile();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	gotoxy(6,2);
	printf("BEST SCORE : %-3d", best);
	gotoxy(6,3);
	printf("   TIME    :%2d m %2d s", (btt/60), (btt%60));
	gotoxy(55,2);
	printf("LAST SCORE : %-3d", score);
	gotoxy(55,3);
	printf("   TIME    :%2d m %2d s", (time/60), (time%60));
	gotoxy(0,5);
	printf("�ܡڡ�ܡڡ�ܡڡ�ܡڡ�ܡ�");
	gotoxy(52,5);
	printf("��ܡڡ�ܡڡ�ܡڡ�ܡڡܡ�");
	gotoxy(0,30);
	printf("�ܡڡ�ܡڡ�ܡڡ�ܡڡ�ܡڡܡڡ�ܡڡ�ܡڡ�ܡڡ�ܡڡܡڡ�ܡڡ�ܡڡ�ܡڡ�");
	gotoxy(37,14);
	printf("START");
	gotoxy(37,19);
	printf("RULE");
	gotoxy(37,24);
	printf("EXIT");
	gotoxy(50,32);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("�̵� : �� ��   ���� : ENTER");
	
	keypoint(kk); 
		
	while(1){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		key=getch(); 
		if(key==224||key==0){
			key = getch();
			if(kk!=2){
				if(key==80) {
					kk++;
					keypoint(kk);
				}
			}
			if(kk!=0){
				if(key==72) { 
					kk--;
					keypoint(kk);
				}
			}
		}
		if(kk==0){
			if(key==13){
				score=0;
				t=ttt(1, NULL, NULL);
				maingame(ht, score, best, t, btt);
			}
		}
		if(kk==1){
			if(key==13){
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
				system("cls"); 
				rule1(best, btt, ht, score, time);
				
			}
		}
		if(kk==2){
			if(key==13){
				system("cls"); 
				gotoxy(33,15);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
				printf("�����մϴ� :)");
				gotoxy(28,31);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
				printf("�Ѿƹ�Ű�� �����ּ����");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
				exit(0);
			}
		}
	}
}

rule1(int best, int btt, int ht, int score, int time){
	system("cls"); 
	int i, tt, key;
		
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	gotoxy(3,4);
	printf("1. ������, ����, ������ ���� ���� ��� �ٸ��ų� ��� ����");
	gotoxy(3,5);
	printf("   3���� �׸��� ���� �ؾ� �Ѵ�.");
	gotoxy(3,7);
	printf("2. ������ �� �̻� ���ٸ� 'X' Ű�� ���� ���� ����� �Ѿ��. ");
	gotoxy(3,9);
	printf("3. �̹� �Է� �� �׸��� ���� ���տ� �ٽ� �Է��� �����ϴ�.(=�ߺ� ���� ����)");
	gotoxy(3,11);
	printf("4. �� 3�� ���� �� ������ ����ȴ�.");
	gotoxy(3,13);
	printf("5. ������ ǥ�ð� �ȴ�.");

	gotoxy(8,19);
	printf("����������������  �� �� ����������������");
	gotoxy(13,22);
	printf(" �� �� :  +1 ��");
	gotoxy(13,24);
	printf("   X   :  +3 ��");
	gotoxy(46,19);
	printf("����������������  �� �� ����������������");
	gotoxy(51,22);
	printf(" �� �� : 1 ~ 9");
	gotoxy(51,24);
	printf(" �� �� :   X  ");
		
	gotoxy(38,11);
	printf("(LIFE :   X 3)");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
	gotoxy(46,11);
	printf("��");
	
	gotoxy(39,32);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	printf("-��-");
	gotoxy(72,32);
	printf("����");
			
	gotoxy(2,1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("MENU : ENTER");
			
	while(1){
		key=getch();
		if(key==13){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
			system("cls"); 
			firstscreen(best, btt, ht, score, time);
		}
		if(key==224||key==0){
			key = getch();
			if(key==77) {
				rule2( best, btt, ht, score, time);
			}		
		}
	}	
}

rule2(int best, int btt, int ht, int score, int time){
	int key, i;
	system("cls");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	gotoxy(23,3);
	printf("��������������������  ���� ���� ��������������������");
	
	for(i=0; i<3; i++){gotoxy(11,7+i); tuto(224, 128, 240);}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	gotoxy(10,11);
	printf(">  �ٸ� ������\n\n\t  >  ���� ����\n\n\t  >  �ٸ� ������ ��");
		
	for(i=0; i<3; i++){gotoxy(11,19+i); tuto(128, 128, 128);}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);	
	gotoxy(10,23);
	printf(">  ���� ������\n\n\t  >  �ٸ� ����\n\n\t  >  ���� ������ ��");
	
	for(i=0; i<3; i++){gotoxy(48,7+i); tuto(240, 224, 128);}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	gotoxy(47,11);
	printf("> �ٸ� ������");
	gotoxy(47,13);
	printf("> �ٸ� ����");
	gotoxy(47,15);
	printf("> �ٸ� ������ ��");
	
	for(i=0; i<3; i++){gotoxy(48,19+i); tuto(224, 224, 224);}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	gotoxy(47,23);
	printf("> ���� ������");
	gotoxy(47,25);
	printf("> ���� ����");
	gotoxy(47,27);
	printf("> �ٸ� ������ ��");		
	
	gotoxy(13,8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),233);
	printf("��");
	gotoxy(20,8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),138);
	printf("��");
	gotoxy(27,8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),252);
	printf("��");
			
	gotoxy(13,20);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),140);
	printf("��");
	gotoxy(20,20);
	printf("��");
	gotoxy(27,20);
	printf("��");
	
	gotoxy(50,8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),250);
	printf("��");
	gotoxy(57,8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),228);
	printf("��");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),137);	
	gotoxy(64,8);
	printf("��");
	
	gotoxy(50,20);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),234);
	printf("��");
	gotoxy(57,20);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),236);
	printf("��");
	gotoxy(64,20);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),233);
	printf("��");
	
	gotoxy(39,32);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	printf("-��-");
	gotoxy(72,32);
	printf("����");
	gotoxy(6,32);
	printf("����");
	
	gotoxy(2,1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("MENU : ENTER");
	
	while(1){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		key=getch(); 
		if(key==13){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
			system("cls"); 
			firstscreen(best, btt, ht, score, time);
		}
		if(key==224||key==0){
			key = getch();
			if(key==77) {
				rule3(best, btt, ht, score, time);
			}
			if(key==75) {
				rule1(best, btt, ht, score, time);
			}
		}
	}
}

rule3(int best, int btt, int ht, int score, int time){
	int key, i;
	system("cls");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	gotoxy(21,3);
	printf("��������������������  �׸� �Է� ��ȣ ��������������������");
	for(i=0; i<3; i++){gotoxy(30,8+i); tuto(112,112,112);}
	for(i=0; i<3; i++){gotoxy(30,12+i); tuto(112,112,112);}
	for(i=0; i<3; i++){gotoxy(30,16+i); tuto(112,112,112);}	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),112);
	gotoxy(32,9); printf("��"); 
	gotoxy(39,9); printf("��");
	gotoxy(46,9); printf("��");
	gotoxy(32,13); printf("��"); 
	gotoxy(39,13); printf("��");
	gotoxy(46,13); printf("��");
	gotoxy(32,17); printf("��"); 
	gotoxy(39,17); printf("��");
	gotoxy(46,17); printf("��");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	gotoxy(24,23);
	printf("��  �Է� ������ ��� ����.");
	gotoxy(24,25);
	printf("��  �Է� ��� �Ұ���.");
	gotoxy(24,27);
	printf("��  �׸��� ���� ���� ǥ�õǾ� ����.");
	
	gotoxy(39,32);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	printf("-��-");
	gotoxy(6,32);
	printf("����");
	
	gotoxy(2,1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	printf("MENU : ENTER");
	
	while(1){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		key=getch(); 
		if(key==13){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
			system("cls"); 
			firstscreen(best, btt, ht, score, time);
		}
		if(key==224||key==0){
			key = getch();
			if(key==75){
				rule2(best, btt, ht, score, time);
			}
		}
	}
}

tuto(int a, int b, int c){

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
		printf("      ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf(" "); 
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), b);
		printf("      ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf(" ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
		printf("      ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		printf("\n");
}

keypoint(int key){
	if(key==0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		gotoxy(48,14);
		printf("��  ");
		gotoxy(48,19);
		printf("    ");
		gotoxy(48,24);
		printf("    ");
	}
	
	if(key==1){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		gotoxy(48,14);
		printf("    ");
		gotoxy(48,19);
		printf("��  ");
		gotoxy(48,24);
		printf("    ");
	}
	
	if(key==2){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		gotoxy(48,14);
		printf("    ");
		gotoxy(48,19);
		printf("    ");
		gotoxy(48,24);
		printf("��  ");
	}
}


int main() {
	
	system("mode con:cols=80 lines=34");
	cursor(0);
	int bestsco, ht=3, btt, score=0, time=0;
	
	bestsco = bestscore(0, ht);
	btt = best_t(0,NULL);
		
	remove_scrollbar(); 
	firstscreen(bestsco, btt, ht, score, time);
}

