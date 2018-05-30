#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,x;
	int arr[20];
	
	scanf("%d%d",&n,&x);

for(int i =0 ; i < n ; i++ )
{
		scanf("%d",&arr[i]);
}



for(int i = 0; i < n ; i++ )
{
		for(int j = i + 1; j < n; j++)
		{
			if( x == arr[i] + arr[j] )
			{
				printf("yes");
				exit(0);
			}
		}
}

printf("No");


}
