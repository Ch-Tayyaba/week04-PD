#include<iostream>
#include<windows.h>
using namespace std;

void maze();
void gotoxy(int x , int y);

main()
{
	system("cls");
	maze();
	int x=2, y=1, b=1;
	while(true)
	{
	if(b<=42)
	{
		if(b<=21)
		{
		gotoxy(x,y);
		cout<<" ";	
		b++;
		y++;	
		gotoxy(x,y);
		cout<<"P";
		Sleep(200);
		}	
		if(b>21)
		{	
		gotoxy(x,y);
		cout<<" ";
		b++;
		y--;	
		gotoxy(x,y);
		cout<<"P";
		Sleep(200);
		}
		if(b==43)
		{
		b=1;
		}
	}
	}


}

void maze()
{
cout<< "######################################################################    " <<endl;
cout<< "||..  ....................................................  ......  ||    " <<endl;
cout<< "||..  %%%%%%%%%%%%%%%%       ...     %%%%%%%%%%%%%%  |%|..   %%%%   ||    " <<endl;
cout<< "||..         |%|   |%|    |%|...     |%|        |%|  |%|..    |%|   ||    " <<endl;
cout<< "||..         |%|   |%|    |%|...     |%|        |%|  |%|..    |%|   ||    " <<endl;
cout<< "||..         %%%%%%%% . . |%|...     %%%%%%%%%%%%%%     ..   %%%%.  ||    " <<endl;
cout<< "||..         |%|      . . |%|...    ............... |%| ..       .  ||    " <<endl;
cout<< "||..         %%%%%%%%%. . |%|...    %%%%%%%%%%%%    |%| ..   %%%%.  ||    " <<endl;
cout<< "||..               |%|.             |%|......       |%| ..    |%|.  ||    " <<endl;
cout<< "||..     ......... |%|.             |%|......|%|        ..    |%|.  ||    " <<endl;
cout<< "||..|%|  |%|%%%|%|.|%|. |%|            ......|%|        ..|%| |%|.  ||    " <<endl;
cout<< "||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|         .|%|.      ||    " <<endl;
cout<< "||..|%|  |%|   |%|..           ...|%|     %%%%%%        . |%|.      ||    " <<endl;
cout<< "||..|%|            .           ...|%|               |%| ..|%|.      ||    " <<endl;
cout<< "||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||    " <<endl;
cout<< "||...............................................   |%| ..........  ||    " <<endl;
cout<< "||   ............................................          .......  ||    " <<endl;
cout<< "||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|    |%| ..|%|.      ||    " <<endl;
cout<< "||..|%|  |%|   |%|..           ...|%|     %%%%%%    |%| ..|%|.      ||    " <<endl;
cout<< "||..|%|            .     G     ...|%|               |%| ..|%|.      ||    " <<endl;
cout<< "||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||    " <<endl;
cout<< "||..............................................    |%| ............||    " <<endl;
cout<< "||  ............................................             .......||    " <<endl;
cout<< "######################################################################    " <<endl;
}

void gotoxy(int x , int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}




























