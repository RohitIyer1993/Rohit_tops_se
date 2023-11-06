#include<stdio.h>
#include<string.h>
struct employee
{
	int empno,age;
	char empname[50],address[50];
}p1,p2,p3;
void main()
{
	struct employee p4 = {4,40,"James","Inglewood Drive"};
	struct employee p5 = {5,50,"Mark","Rosewood Drive"};
	
	char empname1[50],address1[50];
	char empname2[50],address2[50];
	char empname3[50],address3[50];
	
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
	printf("\n");
	printf("Enter employee no: ");
	scanf("%d",&p2.empno);
	printf("Enter employee name: ");
	scanf("%s",&empname2);
	strcpy(p2.empname,empname2);
	printf("Enter employee age: ");
	scanf("%d",&p2.age);
	printf("Enter employee address: ");
	scanf("%s",&address2);
	strcpy(p2.address,address2);
	printf("\n");
	printf("Enter employee no: ");
	scanf("%d",&p3.empno);
	printf("Enter employee name: ");
	scanf("%s",&empname3);
	strcpy(p3.empname,empname3);
	printf("Enter employee age: ");
	scanf("%d",&p3.age);
	printf("Enter employee address: ");
	scanf("%s",&address3);
	strcpy(p3.address,address3);
	printf("\n");
	printf("\n--------------Result-------------\n");
	printf("Employee No: %d\n",p1.empno);
	printf("Employee Name: %s\n",p1.empname);
	printf("Employee Age: %d\n",p1.age);
	printf("Employee Address: %s\n",p1.address);
	printf("\n");
	printf("Employee No: %d\n",p2.empno);
	printf("Employee Name: %s\n",p2.empname);
	printf("Employee Age: %d\n",p2.age);
	printf("Employee Address: %s\n",p2.address);
	printf("\n");
	printf("Employee No: %d\n",p3.empno);
	printf("Employee Name: %s\n",p3.empname);
	printf("Employee Age: %d\n",p3.age);
	printf("Employee Address: %s\n",p3.address);
	printf("\n");
	printf("Employee No: %d\n",p4.empno);
	printf("Employee Name: %s\n",p4.empname);
	printf("Employee Age: %d\n",p4.age);
	printf("Employee Address: %s\n",p4.address);
	printf("\n");
	printf("Employee No: %d\n",p5.empno);
	printf("Employee Name: %s\n",p5.empname);
	printf("Employee Age: %d\n",p5.age);
	printf("Employee Address: %s",p5.address);
}
