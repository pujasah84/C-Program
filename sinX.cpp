#include<stdio.h>
#define pi 3.142
int main ()
{
	float x,sum ,term,xdegree;
	int i;
	printf("\nEnter value of x in degree:\t");
	scanf("%f",&x);
	xdegree=x;
	x=x*(pi/180);
	sum=x;
	term=x;
	for(i=1;i<=20;i++)
	{
		term =-1*term*x*x/(2*i*(2*i+1));
		sum+=term;
	}
printf("\n The sin(% 2f)=%2f ",xdegree,sum);
return 0;
}
