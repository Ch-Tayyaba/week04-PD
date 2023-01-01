#include<iostream>

using namespace std;

main()
{
string countryName;
float price;
float finalPrice;
float discount;
while(1)
{
cout<< "Enter Country Name : ";
cin>> countryName;
cout<< "Enter Price in dollars : ";
cin>> price;
if(countryName == "pakistan")
{
	discount = 0.05 * price;
	finalPrice = price - discount;
	cout<< "Final Price of Ticket : " <<finalPrice <<endl;
}
if(countryName == "ireland")
{
	discount = 0.1 * price;
	finalPrice = price - discount;
	cout<< "Final Price of Ticket : " <<finalPrice <<endl;
}
if(countryName == "india")
{
	discount = 0.2 * price;
	finalPrice = price - discount;
	cout<< "Final Price of Ticket : " <<finalPrice <<endl;
}
if(countryName == "england")
{
	discount = 0.3 * price;
	finalPrice = price - discount;
	cout<< "Final Price of Ticket : " <<finalPrice <<endl;
}
if(countryName == "canada")
{
	discount = 0.45 * price;
	finalPrice = price - discount;
	cout<< "Final Price of Ticket : " <<finalPrice <<endl;
}

}
}