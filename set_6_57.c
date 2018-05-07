#include<stdio.h>
void main()
{
	char str[20], search;
 int count[26];
	
	gets(str);
	for(int i=0;i<26;i++)
	{
		count[i] = 0;
	}
	int c =0,x=0;
	while(str[c] != '\0')
	{
		x  = str[c] - 'a' ;
		count[x]++;
		
		c++;
	}
	

/*for(int i=0;i < 26;i++)
	 printf("%d",count[i]);
*/	 
	 scanf("%c",&search);
	 
	 
	 int val_search = (int)search;
	 
//	 printf("%d",val_search);
	 
	 int index_in_count_array = val_search - 97;
	 
	  int value_repeated  = count[index_in_count_array];
	 printf("%d",value_repeated);
	 
	 
}
