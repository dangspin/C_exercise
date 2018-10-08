/*Verify that the expression getchar() != EOF is 0 or 1*/

#include <stdio.h>


int main()
{
    int eof;
    char c;
    
    c = getchar();
    while (eof = (c!=EOF))
    {
        printf("EOF is %d\n",eof);
        printf("The char is %c\n\n", c);
        c = getchar();
    }
    
    printf("%d\n", eof);
    return 0;
}
