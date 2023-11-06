#include<stdio.h>
int fact(int);
int main()
{
	int n,f;
	printf("Enter the number: ");
	scanf("%d",&n);
	f=fact(n);
	printf("This is your factorial: %d",f);
}
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
