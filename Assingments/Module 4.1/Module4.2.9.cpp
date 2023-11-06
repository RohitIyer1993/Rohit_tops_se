#include<iostream>
using namespace std;
class Matrix
{
	int i;
	int a[3];
	public:
		void display();
		void display1();
		void operator+(Matrix b);
};
void Matrix::display()
{
	cout<<"Enter Matrix Elements: "<<endl;
	for(i=0;i<3;i++)
	{
		cout<<"";
		cin>>a[i];
	}
}
void Matrix::display1()
{
	for(i=0;i<3;i++)
	{
		cout<<"";
		cin>>a[i];
	}
	cout<<"\n";
}
void Matrix::operator+(Matrix b)
{
	int mat[3];
	for(i=0;i<3;i++)
	{
		mat[i]=a[i]+b.a[i];
	}
	for(i=0;i<3;i++)
	{
		cout<<"";
		cout<<mat[i]<<"\t";
	}
	cout<<"\n";
}
int main()
{
	Matrix obj;
	Matrix obj1;
	obj.display();
	obj1.display();
	obj.display1();
	obj1.display1();
	obj+obj1;
	return 0;
}
