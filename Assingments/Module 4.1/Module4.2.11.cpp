#include<iostream>
using namespace std;
int display(int, int);
float display(float);
float display(float, float);
int main()
{
	int length,breadth;
	float radius,height,base;
	cout<<"Enter the length of Rectangle: ";
	cin>>length;
	cout<<"Enter the breadth of Rectangle: ";
	cin>>breadth;
	cout<<"Enter the base of Triangle: ";
	cin>>base;
	cout<<"Enter the height of Triangle: ";
	cin>>height;
	cout<<"Enter the radius of Circle: ";
	cin>>radius;
	cout<<"Area of Rectangle: "<<display(length,breadth)<<endl;
	cout<<"Area of Triangle: "<<display(base,height)<<endl;
	cout<<"Area of Circle: "<<display(radius);
}
int display(int length, int breadth)
{
	return(length*breadth);
}
float display(float base, float height)
{
	return((base*height)/2);
}
float display(float radius)
{
	return(3.14*radius*radius);
}
