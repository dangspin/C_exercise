/*Write a program to print the corresponding Celsius to Fahrenheit table*/

#include <stdio.h>

int main()
{
    float celsius, fahr;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    printf("  C\tF\n\n");
    
    celsius = lower;
    while (celsius <= upper)
    {
        printf("%3.0f\t%6.1f\n",celsius, (9.0/5.0)*celsius+32);
        celsius = celsius + step;
    }
    return 0;
}
