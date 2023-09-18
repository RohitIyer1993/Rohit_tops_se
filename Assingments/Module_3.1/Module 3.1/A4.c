#include<stdio.h>
void main()
{
	int principle,time,rate,SI;
	
	printf("Enter principle amount: ");
	scanf("%d",&principle);
	
	printf("Enter time: ");
	scanf("%d",&time);
	
	printf("Enter rate: ");
	scanf("%d",&rate);
	
	SI=(principle*time*rate)/100;
	printf("Simple Interest: %d",SI);
	
}
