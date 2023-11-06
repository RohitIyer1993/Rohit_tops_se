#include<stdio.h>
void main()
{
	char Operator;
	float a,b,result;
	
	printf("Enter an Operator: ");
	scanf("%c",&Operator);
	
	printf("Enter the value of two numbers: ");
	scanf("%f%f",&a,&b);
	
	switch(Operator)
	{
		case'+':
			result=a+b;
			break;
		case'-':
		    result=a-b;
			break;
		case'*':
		    result=a*b;
			break;
		case'/':
		    result=a/b;
			break;
		default:
		    printf("Invalid Operator");
			break;					
	}
	printf("The Result of the two numbers %.2f %c %.2f: %.2f",a,Operator,b,result);
	
}
