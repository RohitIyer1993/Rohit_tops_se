#include<iostream>
using namespace std;
class Cricketer
{
	public:
		int a;
		void display()
		{
			cout<<"Enter the value of Total Runs: ";
			cin>>a;
		}
};
class Batsman: public Cricketer
{
	public:
		int b;
		void display1()
		{
			cout<<"Enter the value of Total Matches: ";
			cin>>b;
		}
		void average()
		{
			cout<<"Average: "<<a/b<<endl;
			cout<<"Best performance: 274";
		}
};
int main()
{
	Batsman obj;
	obj.display();
	obj.display1();
	obj.average();
	return 0;
}

