#include<stdio.h>
#include<string.h>
void main()
{ char str[20],current;int len;
	printf("Ente any string\n");
	gets(str);
	len =strlen(str);
   
   for(int i=0;i<len;i++)
   {
   
    current = str[i] + 3;
    
   printf("%c",current);
   }
   
   
   
   
   
}
