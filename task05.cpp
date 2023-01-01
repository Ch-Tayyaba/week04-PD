#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x , int y);

main()
{
	system("cls");
	gotoxy(20,10);
	cout<<" *******     *     *     *   *     *     *      * *       *       ";gotoxy(20,11);
	cout<<"    *       * *     *   *     *   *     * *     *  *     * *      ";gotoxy(20,12);
	cout<<"    *      *****     * *       * *     *****    ***     *****     ";gotoxy(20,13);
	cout<<"    *     *     *     *         *     *     *   *  *   *     *    ";gotoxy(20,14);
	cout<<"    *    *       *    *         *    *       *  * *   *       *   ";gotoxy(20,15);

}


void gotoxy(int x , int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}