#include<stdio.h>
void main()
{
    int n;
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