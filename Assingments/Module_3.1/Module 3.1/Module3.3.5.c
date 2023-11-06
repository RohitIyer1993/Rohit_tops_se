#include<stdio.h>
int main()
{
	int arr[10],i,j,k,temp;
	printf("Enter the no of elements: ");
	scanf("%d",&arr[i]);
	for(i=0;i<10;i++)
	{
	printf("Enter the elements: ",i);
	scanf("%d",&arr[i]);
    }
    printf("This is your arr: \n");
	for(i=0;i<10;i++)
	{
	   printf("%d\n",arr[i]);	
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
	    {
		if(arr[j]>arr[i])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	    }
	}
	printf("This is your ascending order: ");
	for(i=0;i<10;i++)
	{
	printf("\n%d\n",arr[i]);
    }
    for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
	    {
		if(arr[j]<arr[i])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	    }
	}
	printf("This is your descending order: ");
	for(i=0;i<10;i++)
	{
	printf("\n%d\n",arr[i]);
    }
    return 0;
}
