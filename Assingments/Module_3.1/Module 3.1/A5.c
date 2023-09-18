#include<stdio.h>
void main()
{
	int days,years;
	
	printf("Enter the no of days: ");
	scanf("%d",&days);	
	years=(days/365);
	printf("Years: %d\n",years);
	
	printf("Enter the no of years: ");
	scanf("%d",&years);
	days=(years*365);
	printf("Days: %d",days);
}
