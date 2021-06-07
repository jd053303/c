#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);	
}

main() {
	
	int i, x, y;
	
	printf("시계를 출려갛ㄹ x, y의 위치는? ");
	scanf("%d %d", &x, &y);
	system("cls");
	for(i=0; i<10; i++){
		gotoxy(x, y);
		printf("%d", i);
		Sleep(1000);
		system("cls");
	}
}
