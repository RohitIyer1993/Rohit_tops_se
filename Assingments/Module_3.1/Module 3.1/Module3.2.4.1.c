#include<stdio.h>
void main()
{
	int days;
	printf("Enter the days: ");
	scanf("%d",&days);
	switch(days)
	{
		case 1:
		    printf("Monday");
		    break;
		case 2:
		    printf("Tuesday");
			break;
		case 3:
		    printf("Wednesday");
			break;
		case 4:
		    printf("Thursday");
			break;
		case 5:
		    printf("Friday");
			break;
		case 6:
		    printf("Saturday");
			break;
		case 7:
		    printf("Sunday");
			break;
		default:
		    printf("Invalid input");
			break;						     
	}
}
