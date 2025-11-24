#include<stdio.h>
void main()
{
    int a,b,c;          //Program to find largest of three numbers without using bitwise operators
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    int largest = a ^ ((a ^ b) & -(a < b));
    largest = largest ^ ((largest ^ c) & -(largest < c));
    printf("The largest number is: %d", largest);
}