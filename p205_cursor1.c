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
	
	printf("�ð踦 ������� x, y�� ��ġ��? ");
	scanf("%d %d", &x, &y);
	system("cls");
	for(i=0; i<10; i++){
		gotoxy(x, y);
		printf("%d", i);
		Sleep(1000);
		system("cls");
	}
}
