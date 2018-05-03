#include<stdio.h>
void main()
{
	int number,fact=1;
	
	printf("enter any number\n");
	scanf("%d",&number);
	
	while(number !=0)
	{
		fact = fact * number;
		number--;
		
	}
	printf("\n%d",fact);
}
