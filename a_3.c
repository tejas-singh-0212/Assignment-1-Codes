#include<stdio.h>
void main() 
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    (a == 0 && b == 0) ? printf("Both are zero\n") :
    (b == 0 || a==0) ? printf("One of the numbers is zero\n") :
    (a % b == 0) ? printf("%d is multiple of %d\n", a, b) :
    (b % a == 0) ? printf("%d is multiple of %d\n", b, a) :
    printf("Neither is multiple of the other ");
}