#include<stdio.h>
void main()
{
	int num,sum;
	printf("Enter the value: ");
	scanf("%d",&num);
	
	while(num!=0)
	{
		sum+= num%10;
		num= num/10;
	}
	printf("The result of the value: %d",sum);
}
