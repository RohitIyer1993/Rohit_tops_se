#include<stdio.h>
void main()
{
	float radius,length,width,height,base,area1,area2,area3;
	
	printf("\n-----------Area of Circle-----------\n");
	
	printf("Enter radius: ");
	scanf("%f",&radius);
	area1=3.14*(radius*radius);
	printf("Area of Circle = %f",area1);
	
	printf("\n-----------Area of Triangle-----------\n");
	
	printf("Enter base: ");
	scanf("%f",&base);
	printf("Enter height: ");
	scanf("%f",&height);
	area2=(base*height)/2;
	printf("Area of Triangle = %f",area2);
	
	printf("\n-----------Area of Rectangle-----------\n");
	
	printf("Enter length: ");
	scanf("%f",&length);
	printf("Enter width: ");
	scanf("%f",&width);
	area3=length*width;
	printf("Area of Rectangle  = %f",area3);
}
