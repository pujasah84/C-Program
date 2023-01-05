#include<stdio.h>
int main()
{
	char name[]="pooja";
	int i,j;
	for(i=0;i<=5;i++){
		for(j=0;j<=5-i;j++){
			printf("%c",name[i]);
		}
		printf("\n");
	}
	return 0;
}
