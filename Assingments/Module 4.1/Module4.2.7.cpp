#include<iostream>
using namespace std;
class Students
{
	public:
		int a;
		void RollNo()
		{
			cout<<"Enter the Roll No: ";
			cin>>a;
		}
};
class Test: public Students
{
	public:
		int b,c;
		void Marks()
		{
			cout<<"Marks in First Subject: ";
			cin>>b;
			cout<<"Marks in Second Subject: ";
			cin>>c;
		}
};
class Result: public Test
{
	public:
		void Sum()
		{
			cout<<"Total Marks: "<<b+c<<endl;
		}
};
int main()
{
	Result obj;
	obj.RollNo();
	obj.Marks();
	obj.Sum();
	return 0;
}
