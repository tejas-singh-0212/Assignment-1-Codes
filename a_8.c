#include<stdio.h>
void main() 
{
    int x, y, i, result = 1;        //Program to calculate x^y
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);
    if (y < 0) 
    {
        printf("Exponent must be non-negative.\n");
    }
    else if (y == 0) 
    {
        printf("%d^%d = 1\n", x, y);
    }
    else
    {
        for (i = 1; i <= y; i++) 
        {
        result *= x;
        }
    (result > 10000)?printf("Overflow!\n"):printf("%d^%d = %d\n", x, y, result);
    }
}