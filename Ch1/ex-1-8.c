/*Write a program to count blanks, tabs, and newlines.*/

#include <stdio.h>

int main() {
	char c;
	int nn, nt, nb;
	nn = nt = nb = 0;
	
	while ((c = getchar())!=EOF)
	{
		if (c == ' ')
		{
			++nb;
		}
		if (c == '\t')
		{
			++nt;
		}
		if (c == '\n')
		{
			++nn;
		}
	}
	
	 printf("------------------\n");
   printf("Total spaces:\t%d\n", nb);
   printf("Total tabs:\t%d\n", nt);
   printf("Total lines:\t%d\n", nn);
	
	return 0;
}

