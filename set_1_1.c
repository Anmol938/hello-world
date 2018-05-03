#include<stdio.h>
#include<string.h>
void main()
{ char string[20];
  char as[20];
  int i,j=0;
  char word;
	//printf("enter  the string\n");
//	scanf("%s",&string);
//	printf("%s",string);
//	printf("hello");
	gets(as);
//	puts(as);
	int last = strlen(as);
	char reverse[20];
//	printf("%d",last);
//	printf(" \n\nactual length %d",last-1);
	for(i=last-1;i>=0;i--)
	{
		reverse[j] = as[i];
		j++;
	}
//	puts("\n");
	 puts(reverse);
	// puts(as);
}
