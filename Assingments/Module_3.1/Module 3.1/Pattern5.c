#include<stdio.h>
void main()
{
	int row,col;
	for(row=1;row<=5;row++)
	{
		for(col=row;col<5;col++)
		{
			printf(" ");
		}
		for(col=1;col<=(2*row-1);col++)
		{
			printf("*");
		}
		printf("\n");
	}
}
