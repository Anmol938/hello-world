#include<stdio.h>
void main()
{
	int number[20];
	int n;
	
	scanf("%d",&n);
	
	for(int i=0;i< n; i++)
		{
			scanf("%d",&number[i]);
		}
		
		
		for(int i =0; i < n;i++ )
		{   int j = 0 ;
			
			if( number[i] == 0)
		   {  
		     if( i >= 1)
			 {
			 j = i-1;
			 }
				while( number[j] != 0)
				{   
					printf(" %d ",number[j]);
					
					if(j >=1)
						j--;
					else
						break;
					
					
				}
			}
		}
	
	
}
