#include<iostream>
using namespace std;
class Swap
{
	int num;
	public:
		Swap(int num)
		{
			this->num=num;
		}
		friend void display(Swap&, Swap&);
};
void display(Swap& s1, Swap& s2)
{
	int temp;
	cout<<"Before Swapping: "<<s1.num<<" "<<s2.num<<endl; 
	
	temp = s1.num;
	s1.num = s2.num;
	s2.num = temp;
	
	cout<<"After Swapping: "<<s1.num<<" "<<s2.num;
}
int main()
{
	Swap s1(7), s2(9);
	display(s1,s2);
	return 0;
}
