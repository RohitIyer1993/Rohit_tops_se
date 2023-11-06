#include<stdio.h>
#include<string.h>
void main()
{
	char name[20];
	int i;
	printf("Enter your name: ");
	gets(name);
	strlen(name);
	printf("This is your name: %ld",strlen(name));
}
