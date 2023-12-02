#include<stdio.h>
main()
{
	int choice;
printf("press 1 for find even or odd\n");
printf("press 2 for find max of two number\n");
printf("press 3 for find leap year or not\n");
printf("press 4 for check if person can eligible for licence or not\n");
scanf("%d",&choice);

if(choice==1)
{
	int num;
	printf("enter the num::>");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("number ie even");
	}
	else
	{
		printf("number is odd");
	}
}
else if(choice==2)
{
	int num1,num2;
	printf("enter two number::>");
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
	{
		printf("num1 is max");
	}
	else
	{
		printf("num2 is max");
	}
}
else if(choice==3)
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("it is leap year");
	}
	else
	{
		printf("it is not leap year");
	}
}
else if(choice==4)
{
	int age;
	printf("enter the age::>");
	scanf("%d",&age);
	if(age>18)
	{
		printf("your are eligible for licence");
	}
	else
	{
		printf("your are not eligible for licence");
	}
	
}
else
{
	printf("enter the valid choice");
}
}