#include<iostream>
using namespace std;
class calculator
{
	float a,b;
	public:
		void result()
		{
			cout<<"Enter the first number: ";
			cin>>a;
			cout<<"Enter the second number: ";
			cin>>b;
		}
		float sum()
		{
			return a+b;
		}
		float diff()
		{
			return a-b;
		}
		float product()
		{
			return a*b;
		}
		float division()
		{
			if(b==0)
			{
				cout<<"Division by zero"<<endl;
				return 0;
			}
			else
			{
				return a/b;
			}
			
		}
};
int main()
{
	int ch;
	calculator c;
	
	cout<<"Enter 1 Add 2 Numbers"<<"\nEnter 2 Subtract 2 Numbers"<<"\nEnter 3 Multiply 2 Numbers"<<"\nEnter 4 Divide 2 Numbers"<<"\nEnter 0 To Exit"<<"\n";
	
	do
	{
		cout<<"Enter your choice: ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				c.result();
				cout<<"Result: "<<c.sum()<<endl;
				break;
				
			case 2:
				c.result();
				cout<<"Result: "<<c.diff()<<endl;
				break;
				
			case 3:
				c.result();
				cout<<"Result: "<<c.product()<<endl;
				break;
				
			case 4:
				c.result();
				cout<<"Result: "<<c.division()<<endl;
				break;			
		}
	
	}
	while(ch>=1 && ch<=4);
			return 0;
}
