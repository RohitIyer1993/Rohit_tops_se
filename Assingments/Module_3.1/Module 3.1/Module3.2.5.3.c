#include<stdio.h>
void main()
{
	int i,even=0,odd=0,even_total,odd_total,num;
	for(i=1;i<=20;i++)
	{
		printf("Enter the numbers: ");
		scanf("%d",&num);
		if(num%2==0)
		{
			even++;
			even_total+=num;			
		}
		else
		{
			odd++;
			odd_total+=num;
		}
	}
		
			printf("Even number total: %d\n",even_total);
			printf("Odd number total: %d\n",odd_total);
			printf("Total no of Even numbers: %d\n",even);
			printf("Total no of Odd numbers: %d\n",odd);
}
