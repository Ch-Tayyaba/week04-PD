#include<iostream>
#include<windows.h>
using namespace std;

void printT();
void printA();
void printY();
void printB();


main()
{
	system("cls");
	printT();
	printA();	
	printY();
	printY();
	printA();
	printB();
	printA();

}



void printT()
{
	cout<< "  #######" <<endl;
	cout<< "     #   " <<endl;
	cout<< "     #   " <<endl;
	cout<< "     #   " <<endl;
	cout<< "     #   " <<endl;
	cout<< endl;
}
void printA()
{
	cout<< "     #     " <<endl;
	cout<< "    # #    " <<endl;
	cout<< "   #####   " <<endl;
	cout<< "  #     #  " <<endl;
	cout<< " #       # " <<endl;
	cout<< endl;
}
void printB()
{
	cout<< "   # #      " <<endl;
	cout<< "   #   #    " <<endl;
	cout<< "   ###      " <<endl;
	cout<< "   #   #    " <<endl;
	cout<< "   # #      " <<endl;
      cout<< endl;
}
void printY()
{
	cout<< "  #     #    " <<endl;
	cout<< "   #   #     " <<endl;
	cout<< "    # #      " <<endl;
	cout<< "     #       " <<endl;
	cout<< "     #       " <<endl;
	cout<< endl;
}