#include<stdio.h>
void main()
{
	int arr[3][3],arr1[3][3],sum[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the values [%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the values [%d][%d]",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",arr[i][j]);
			
		}
		printf("\n");
	}
	printf("\n-------------Matrix2-------------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",arr1[i][j]);
			
		}
		printf("\n");
	}
	printf("\n-------------Addition-------------\n");
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			sum[i][j]=arr[i][j]+arr1[i][j];
		}
    }
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d",sum[i][j]);
		}
	}
}

