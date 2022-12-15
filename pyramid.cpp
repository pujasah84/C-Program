#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	char str[]="HELLO";
	
	for(i=0;i<5;i++){
		for(j=0;j<=i;j++){
			printf("%c",str[j]);
		}
		printf("\n");
		
	}
	for(i=0;i<4;i++){
		for(j=0;j<=(4-i-1);j++){
		
			printf("%c",str[j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
