#include<iostream>
#include<string.h>
using namespace std;
class String
{
	public:
		char s1[50], s2[50];
		String(char str1[], char str2[])
		{
			strcpy(this->s1, str1);	
			strcpy(this->s2, str2);
		}
		void display()
		{
			cout<<"\nConcatenation: "<<strcat(s1,s2);
		}
};
int main()
{
	char str1[] = "Rohit";
	char str2[] = "Iyer";
	
	String obj(str1, str2);
	obj.display();
	return 0;
}
