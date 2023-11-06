#include<iostream>
using namespace std;
template <class T>
int display(T& x, T& y)
{
	T t;
	t = x;
	x = y;
	y = t;
	return 0;
}
int main()
{
	int a,b;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	display(a,b);
	cout<<a<<"\t"<<b<<endl;
	return 0;;
}
