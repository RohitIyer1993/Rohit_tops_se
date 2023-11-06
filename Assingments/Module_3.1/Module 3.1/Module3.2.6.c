#include<stdio.h>
void main()
{
	int i,f=1,num;
	printf("Enter the number: ");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		f=f*i;
	}
	printf("The result of Factorial: %d",f,num);
}
