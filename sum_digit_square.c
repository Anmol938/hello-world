#include<stdio.h>
void main()
{
  int num,sum = 0,rem;
printf("enter a number \n");
scanf("%d",&num);

while(num!=0)
{    rem = num%10;
	 num = num/10;
	 sum = sum + (rem*rem);
}

printf("sum o fsquares is %d ",sum);
printf("\nEOP\n");	

int pow = 2^2;
int mul = 2*2;
printf("%d ",pow);
printf("%d",mul);
}
