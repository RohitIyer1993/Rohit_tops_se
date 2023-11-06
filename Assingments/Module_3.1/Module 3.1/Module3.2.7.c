#include<stdio.h>
void main()
{
	int i,a=0,b=1,c,num;
	printf("Enter total no of values: ");
	scanf("%d",&num);
	printf("%d\t%d\t",a,b);
	for(i=2;i<num;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
}
