#include<stdio.h>


main()
{

	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",j);
	    }
		printf("%d\n",i);
	}
}