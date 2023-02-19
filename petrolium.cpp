/*The price of petroleum in Pakistan is Rs. 238.56 per litre. Write a program to take the
number of litres as an input from the user (fuel dispenser) and compute the total bill to be
charged to the customer.*/

#include<iostream>
using namespace std;
int main()
{
	float price=238.56,amount_to_pay;
	int litre;
	cout<<"Enter the amount of litre: ";
	cin>>litre;
	amount_to_pay=litre*price;
	cout<<"The payable amount for the petrolium= "<<amount_to_pay;
}
