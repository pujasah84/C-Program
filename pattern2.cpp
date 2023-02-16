#include<stdio.h>
#include<conio.h>
int main ()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		for(j=i;j<=i;j++)
		{
			printf("%d",(i+j)%2);
		}
		printf("\n");
	}
	return 0;
}
