#include<stdio.h>
int main()
{
	int arr[10],n,max,min;
	int i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the elements in the array: %d",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

    max=maximum(arr,0,n);
    min=mininum(arr,0,n);

    printf("Maximum element in the array: %d\n,",max);
    printf("Minimum element in the array: %d\n,",min);
    return 0;
}
int maximum(int arr[10],int index,int len)
{
	int max;
	if(index>=len-2)
	{
		if(arr[index]>arr[index+1])
		{
			return arr[index];
		}
		else
		{
			return arr[index+1];
		}
	}
	max=maximum(arr,index+1,len);
	if(arr[index]>max)
	{
		return arr[index];
	}
	else
	{
		return max;
	}
}
int minimum(int arr[10],int index,int len)
{
	int min;
	if(index>=len-2)
	{
		if(arr[index]>arr[index+1])
		{
			return arr[index];
		}
		else
		{
			return arr[index+1];
		}
	}
	min=minimum(arr,index+1,len);
	if(arr[index]<min)
	{
		return arr[index];
	}
	else
	{
		return min;
	}
}
