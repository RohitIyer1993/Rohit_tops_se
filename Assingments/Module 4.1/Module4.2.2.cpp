#include<iostream>
#include<string.h>
using namespace std;
class Bank
{
	string name,type;
	int account,a,b;
	public:
		void display()
		{
			cout<<"Enter the name of Depositor: ";
			cin>>name;
			cout<<"Enter the Type of Account: ";
			cin>>type;
			cout<<"Enter the Account number: ";
			cin>>account;
			cout<<"Enter the Balance Amount: ";
			cin>>a;
			cout<<"Enter the Withdrawl Amount: ";
			cin>>b;
		}
		void display1()
		{
			cout<<"------------------------------"<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Type: "<<type<<endl;
			cout<<"Account: "<<account<<endl;
			cout<<"Remaining Amount: "<<a-b<<endl;
		}
};
int main()
{
	Bank obj;
	obj.display();
	obj.display1();
	return 0;
}
