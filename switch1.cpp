#include<stdio.h>
#include<conio.h>
int main()
{
	int l,n;
	char ch='y';
	while(ch=='y')
	{
	
	printf("Enter the week day:\n");
	scanf("%d",&l);
	switch(l)
	
	{
		    case 1:
		    printf("monday\n");
	     	break ;
	     	
		    case 2:
			printf("tuesday\n");
			break;
			
			case 3:
			printf("wednesday\n");
			break;
			
			case 4:
			printf("thrusday\n");
			break;
			case 5:
			printf("friday\n");
			break;
			
			case 6:
			printf("saturday\n");
			break;
			default:
			printf("wrong number:");
		}
	 printf("Do you want yo continue ?y\n");
	 scanf("%s",&ch);
	 } 
		return 0;
	}
		
			
			


