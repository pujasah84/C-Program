#include<stdio.h>
void intrest();  //function prototype
int main()
{
	
	intrest(); //function call
	
	return 0;
}

void intrest(){   //function defination
	int p,t;
	float r,amt;
	printf("Enter a value of p:");
	scanf("%d",&p);
	printf("Enter a value of t:");
	scanf("%d",&t);
	printf("Enter a value of r:");
	scanf("%f",&r);
	amt=(p*t*r)/100;
	printf("The result is:%f",amt);
}
