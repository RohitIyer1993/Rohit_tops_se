#include<stdio.h>
void main()
{
	int num,num1,num2,sum;
	printf("Enter the value: ");
	scanf("%d",&num);
	
	num1 = num%10;
	while(num>10)
	{
		num= num/10;
	}
	num2 = num;
	sum = num1+num2;
	printf("The result of the value: %d",sum);
}
