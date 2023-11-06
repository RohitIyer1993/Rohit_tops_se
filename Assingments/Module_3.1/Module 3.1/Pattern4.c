#include<stdio.h>
void main()
{
	int row,col;
	char name='A';
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%c",name+col-1);
		}
		printf("\n");
	}
}
