#include<stdio.h>
#include<strings.h>

int value(char c)
{
	if(c == 'I' )
	{ return 1;		
	}
	else if(c == 'V' )
	{
		return 5;
	}
	else if(c == 'X')
	{
		return 10;
	}
	else if(c == 'L')
	{
		return 50;
	}
	else if( c == 'C')
	{
		return 100;
	}
	else if(c == 'D')
	{
		return 500;
	}
	else if(c == 'M')
	{
		return 1000;
	}
	else 
		return -1;
}
int Roman2Integer(char string[20])
{

    // Initialize result
    int res = 0;
 
    // Traverse given input
    for (int i=0; i<strlen(string); i++)
    {
        // Getting value of symbol s[i]
        int s1 = value(string[i]);
 
        if (i+1 < strlen(string))
        {
            // Getting value of symbol s[i+1]
            int s2 = value(string[i+1]);
 
            // Comparing both values
            if (s1 >= s2)
            {
                // Value of current symbol is greater
                // or equal to the next symbol                 
                res = res + s1;
            }
            else
            {
                res = res + s2 - s1;
                i++; // Value of current symbol is
                     // less than the next symbol
            }
        }
        else
        {
            res = res + s1;
            i++;
        }
    }
    return res;
}


void main()
{  char string[20];
	
	//printf("enter a roman string to get the integer value\n");
	gets(string);
	
int result = Roman2Integer(string);
  printf("%d",result);	
	printf("\nEOP\n");
}
