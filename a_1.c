#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;          //Code to perform the operation a^3 + b^2 - 2ab + c(a + b)
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    int result = pow(a, 3) + pow(b, 2) - 2 * a * b + c * (a + b);
    printf("Result is: %d", result);
}