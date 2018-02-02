#include<stdio.h>
void main()
{
	int n,factor[20],j=0,flag =0;
	
	
	scanf("%d",&n);
	
	
	
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
		
		factor[j] = i;
		j++;
		}
	}
	
	
	
	
	int numbr,k,remark;
	int v= 0;
	for(numbr=factor[v];numbr<=j;numbr++)

               {

              		 remark=0;

               		for(k=2;k<=factor[v]/2;k++)
			   		{	

               			if((factor[v] % k) == 0)
			   			{	

               			remark++;

               			break;

               			}	

               		}	

              	 if(remark==0)

               	printf("%d\n",numbr);
                v++;
              }
	
	
}
