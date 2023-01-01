#include<iostream>
using namespace std;

main()
{
int firstInteger;
int secondInteger;
while(true)
{
	cout<< "Enter 1st Integer : ";
	cin>> firstInteger;
	cout<< "Enter 2nd Integer : ";
	cin>> secondInteger;
	if(firstInteger == secondInteger)
	{
		cout<< "True" <<endl;
	}
	if(firstInteger != secondInteger)
	{
		cout<< "False" <<endl;
	}
}
}