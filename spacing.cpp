#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<=7;i++){       // rows
		for(j=1;j<=7-i;j++){        //space
		
		printf(" ");
	}
	for(k=1;k<=i;k++); //colum
	{
		printf(" # ");
	printf("\n");
	}
}
	return 0;
}
