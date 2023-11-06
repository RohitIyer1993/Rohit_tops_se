#include<stdio.h>
void main()
{
	int num,large,rem;
	printf("Enter the value: ");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
		if(rem>large)
		{
			rem=large;
		}
		num=num/10;
	}
	printf("This is the largest digit in the value: %d",large);
}
