#include <stdio.h>
#include <windows.h> //gotoxy,sleep,system("cls")
#include <conio.h> //getch,kbhit

int i,j,v,x,y;

void gotoxy(int x, int y);

int main()
{
	
	while(true){
		gotoxy(x,y);
		printf("*");
			if(kbhit()){
				v = getch();
				switch(v){
					case 72:
						y--;
						break;
					case 80:
						y++;
						break;
					case 75:
						x--;
						break;
					case 77:
						x++;
						break;
					}
			}
		Sleep(51);
		system("cls");
	}
}

void gotoxy(int x,int y)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); 
}