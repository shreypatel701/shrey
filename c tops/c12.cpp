#include<stdio.h>

main()
{
int a,b,sum,choice;

printf("\npress 1 for addition");
printf("\npress 2 for sub");
printf("\npress 3 for mul");
printf("\npress 4 for div\n");
scanf("\n%d",&choice);
if (choice==1)
{
	printf("\nenter num a::>");
				scanf("%d",&a);
	printf("\nenter num b::>");
	scanf("%d",&b);
	sum=a+b;
printf("%d\n",sum);	
	}
	else if(choice==2)
	{
			printf("\nenter num a::>");
				scanf("%d",&a);
	printf("\nenter num b::>");
	scanf("%d",&b);
	sum=a-b;
printf("%d\n",sum);	
		}
		else if(choice==3)
		{
				printf("\nenter num a::>");
				scanf("%d",&a);
	printf("\nenter num b::>");
	scanf("%d",&b);
	sum=a*b;
printf("%d\n",sum);	
			}
			else if(choice==4)
			{
				printf("\nenter num a::>");
				scanf("%d",&a);
	printf("\nenter num b::>");
	scanf("%d",&b);
	sum=a/b;
printf("%d\n",sum);	
				}
				else
				{
					printf("enter valid choice");
				}
						
} 

