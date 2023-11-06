#include<stdio.h>
#include<string.h>
struct employee
{
	int empno,age;
	char empname[50],address[50];
}p1;
void main()
{
	char empname1[50],address1[50];
	printf("Enter employee no: ");
	scanf("%d",&p1.empno);
	printf("Enter employee name: ");
	scanf("%s",&empname1);
	strcpy(p1.empname,empname1);
	printf("Enter employee age: ");
	scanf("%d",&p1.age);
	printf("Enter employee address: ");
	scanf("%s",&address1);
	strcpy(p1.address,address1);
	printf("\n--------------Result-------------\n");
	printf("Employee No: %d\n",p1.empno);
	printf("Employee Nmae: %s\n",p1.empname);
	printf("Employee Age: %d\n",p1.age);
	printf("Employee Address: %s",p1.address);
}
