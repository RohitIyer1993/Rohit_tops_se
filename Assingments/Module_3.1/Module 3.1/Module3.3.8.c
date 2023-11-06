#include<stdio.h>
#include<string.h>
void main()
{
	char name[20],name1[20];
	int i;
	printf("Enter your name: ");
	gets(name);
	strcpy(name1,name);
	printf("This is your name: %s",strrev(name));
	i=strcmp(name,name1);
	printf("\n--------------------------\n");
	if(i==0)
	{
		printf("Name is Palindrome");
	}
	else
	{
		printf("Name is not Palindrome");
	}
	return 0;
}
