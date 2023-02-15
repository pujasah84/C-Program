#include<stdio.h>
#include<conio.h>
int main ()
{
	int choice;
		printf("press 1 for sunday:\n");
		printf("press 2 for monday:\n");
		printf("press 3 for tuesday:\n");
		printf("press 4 for wednesday:\n");
		printf("press5 for thrusday:\n");
		printf("press 6 for friday:\n");
		printf("printf 7 is saturday:\n");
		scanf("%d",&choice);
		switch(choice)
		{
      
        case 1:
        	printf("sunday");
        	break;
        case 2:
        	printf("monday");
        	break ;
        case 3:
        	printf("tuesday");
        	break;
        case 4:
        	printf("wednesday");
         case 5:
        	printf("thrusday");
        	break;
        case 6:
        	printf("friday");
        	break;
        case 7:
        	printf("saturday");
        	break ;
        	default :
        	printf("invalid input");
		}
		return 0;
	}
