/*Write a program to copy its input to its output, replacing each tab by \t
  each backsapce by \b, and each backsalsh by \\. This makes tabs and backspaces visible in an unambiguous way.*/


#include <stdio.h>

#define ESCAP '\\' /*Define a constant: escap*/

int main()
{
	/*Define c, and initialize it to getchar()*/
	int c;
	c = getchar();
	
	while (c != EOF)
	{
		switch(c)
		{
			case '\b':
        		/* The OS on which I tested this (NT) intercepts \b characters. */
        		putchar(ESCAP);
        		putchar('b');
        		break;
    		case '\t':
        		putchar(ESCAP);
        		putchar('t');
        		break;
    		case ESCAP:
        		putchar(ESCAP);
        		putchar(ESCAP);
        		break;
    		default:
        		putchar(c);
        		break;
			}
	}
	
	return 0;
}
