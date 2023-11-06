#include<iostream>
using namespace std;
class operation
{
	public:
	int a,b,sum,sub,mul;
	float div;
	operation()
	{
		cout<<"Enter the first number: ";
		cin>>a;
		cout<<"Enter the second number: ";
		cin>>b;
	}
	void addition()
	{
		sum = a+b;
		cout<<"This is your Addition: "<<a+b<<endl;
	}
	void difference()
	{
		sub = a-b;
		cout<<"This is your Difference: "<<a-b<<endl;
	}
	void product()
	{
		mul = a*b;
		cout<<"This is your Product: "<<a*b<<endl;
	}
	void remainder()
	{
		div = a/b;
		cout<<"This is your Remainder: "<<a/b<<endl;
	}
};
int main()
{
	operation obj;
	obj.addition();
	obj.difference();
	obj.product();
	obj.remainder();
	return 0;
}

