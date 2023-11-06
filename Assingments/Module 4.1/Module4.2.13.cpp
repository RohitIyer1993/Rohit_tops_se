#include<iostream>
using namespace std;
class Max
{
	int a,b;
	public:
		void display()
		{
			cout<<"Enter first number: ";
			cin>>a;
			cout<<"Enter second number: ";
			cin>>b;
		}
		friend void display1(Max obj);
};
void display1(Max obj)
{
	if(obj.a>obj.b)
	{
		cout<<"Largest number is: "<<obj.a;
	}
	else
	{
		cout<<"Largest number is: "<<obj.b;
	}
}
int main()
{
	Max obj;
	obj.display();
	display1(obj);
	return 0;
}
