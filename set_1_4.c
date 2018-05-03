#include<stdio.h>
#include<string.h>
void main()
{ int i=1;
	char string[10];
	//printf("enter any string n it will be appended by . \n");
	fgets(string,20,stdin);
	
int count = strlen(string);
printf("%d\n",count);
string[count-1] = '.';
puts(string);

}
