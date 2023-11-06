#include<iostream>
using namespace std;
class Person
{
	public:
		int a;
		char name;
		void display()
		{
			cout<<"Name: Rohit"<<endl;
//			cin>>name;
			cout<<"Age: 30 "<<endl;
//			cin>>a;
		}
};
class Student
{
	public:
		float b;
		void display1()
		{
			cout<<"Percentage: 97.77"<<endl;
//			cin>>b;
		}
};
class Teacher: public Person,public Student
{
	public:
	int c;
	void display2()
	{
		cout<<"Salary: 77000"<<endl;
//		cin>>c;
	}
};
int main()
{
	Teacher obj;
	obj.display();
	obj.display1();
	obj.display2();
	return 0;
}
