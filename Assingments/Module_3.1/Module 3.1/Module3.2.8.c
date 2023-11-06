#include<stdio.h>
void main()
{
	int num,num1;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	while(num!=0)
	{
		num1 = (num1*10) + (num%10);
		num /= 10;
	}
	printf("The reverse number is: %d",num1);
}
