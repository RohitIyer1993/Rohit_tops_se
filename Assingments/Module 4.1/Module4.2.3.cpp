#include<iostream>
using namespace std;
class operation
{
	int a,b,mul;
	public:
		void product();
		void get();
};
inline void operation::get()
{
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
}
inline void operation::product()
{
	mul = a*b;
	cout<<"Product of two numbers: "<<a*b<<endl;
}
inline int cube(int s){return s*s*s;}
int main()
{
	int s;
	operation obj;
	obj.get();
	obj.product();
	cout<<"Enter the number: ";
	cin>>s;
	cout<<"The cube is: "<<s*s*s<<endl;
	return 0;
}
