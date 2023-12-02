#include<stdio.h>
main()
{
	char choice;
	int quantity;

     printf(" \ntype p for pizza  (price=180rs/pcs)");
     printf(" \ntype b for burger (price=100rs/pcs)");
     printf(" \ntype d for dosa (price=120rs/pcs)");
     printf(" \ntype i for idli  (price=50rs/pcs)");
     printf("\nenter your choice");
     scanf("%c",&choice);
     
     if(choice=='p' || choice=='P')
     {
	 printf("\nyou selected pizza");
	  printf("\nenter the quantity::>");
     scanf("%d",&quantity);
     switch(quantity)
     {
     	case 2:
     		{
     			printf("your total amount =360RS");
     			break;
			 }
			 case3:
			 	{
			 		printf("your total amount =540RS");
			 		break;
				 }
			 defalut:
			 	{
			 		printf("invalid");
			 		break;
				 }
      {
	  printf("\nyou selected burger");
	   printf("\nenter the quantity::>");
     scanf("%d",&quantity);
      }
  }
}
      else if(choice=='d' || choice=='D')
      {
     printf("\nyou selected dosa");
      printf("\nenter the quantity::>");
     scanf("%d",&quantity);
      }
      else if(choice=='i' || choice=='I')
      {
     printf("\nyou selected idli");
      printf("\nenter the quantity::>");
     scanf("%d",&quantity);
      }
     else
     {
     printf("\nenter valid choice");
     }
     
}