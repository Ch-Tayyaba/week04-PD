#include <iostream>
using namespace std;


void ifSpeed(int speed);

main()

{

int speed;
while(1)
{
cout << "Enter your speed : " ;
cin >> speed;

ifSpeed(speed);
}


}

void ifSpeed(int speed)
{


if(speed == 100)
{ 
	cout << "Perfet..you are going good!!" <<endl; 
}

if (speed > 100)
{
 	cout << "Halt..YOU WILL BE CHALLENGED!!!" <<endl; 
}

if (speed < 100)
{
	 cout << "Perfet..you are going good!!" <<endl; 
}


}
