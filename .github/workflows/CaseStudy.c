#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define p printf
#define s scanf

COORD coord={0,0}; 
 
void gotoxy(int x,int y)
{
  	coord.X=x;
 	coord.Y=y;
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void main()
	{
		gotoxy(30,2);p("旼컴컴컴컴컴컴컴커");
		gotoxy(30,3);p("�  MILKTEA SHOP  �");
		gotoxy(30,4);p("읕컴컴컴컴컴컴컴켸");
		gotoxy(50,3);
			p("MACAO IMPERIAL TEA");
			p("");
	}
		

struct blah{
	char one[100], two[100];
	int three[100];
};		
		struct blah haha;
		
		haha.one haha.two haha.three	
