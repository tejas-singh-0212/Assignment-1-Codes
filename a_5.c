#include<stdio.h>
void main()
{
    int n;              //Program to print Fizz, Buzz, or FizzBuzz based on divisibility by 3 and 5
    printf("Enter an integer: ");
    scanf("%d", &n);
    if(n%3==0)
    {
        if(n%5==0)
        {
            printf("FizzBuzz");
        }
        else
        {
            printf("Fizz");
        }
    }
    else
    {
        if(n%5==0)
        {
            printf("Buzz");
        }
        else
        {
            printf("%d", n);
        }
    }
}