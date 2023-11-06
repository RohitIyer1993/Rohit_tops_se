#include<iostream>
using namespace std;
void display(int a, int b)
	{
		cout<<"This is your addition: "<<a+b<<endl;
	}
void display(int a, double b)
	{
		cout<<"This is your subtraction: "<<a-b<<endl;
	}
void display(double a, double b)
	{
		cout<<"This is your multiplication: "<<a*b<<endl;
}
void display(double a, int b)
	{
		cout<<"This is your division: "<<a/b<<endl;
	}
int main()
{
	display(7,4);
	display(80,43.27);
	display(77.77,99.99);
	display(77.77,11);
	return 0;
}
