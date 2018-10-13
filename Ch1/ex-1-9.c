/*Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank*/

#include <stdio.h>

int main() {
	int c; /*we use int type to store the character*/
	
	/*Initial the first c*/
	c = getchar();
	
	while (c != EOF)
	{
		putchar(c);
		
		/*if c indeed is a blank, we then check when it will be terminated.*/
		if (c == ' ')
		{
			while (c == ' ')
			{
				c = getchar();
			}
			putchar(c);
		}
		
		c = getchar();
	}
	return 0;
}



