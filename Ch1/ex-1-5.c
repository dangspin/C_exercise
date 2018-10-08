/*Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0*/

#include <stdio.h>

#define lower 0
#define upper 300
#define step  20

int main()
{
    float celsius, fahr;
    
    printf("  F\tC\n\n");
    
    for (fahr = upper; fahr >= lower; fahr = fahr - step)
    {
        printf("%3.0f\t%6.1f\n",fahr, (5.0/9.0)*(fahr - 32));
    }
    
    return 0;
}
