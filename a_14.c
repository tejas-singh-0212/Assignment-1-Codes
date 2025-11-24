#include<stdio.h>
void main() 
{
    int a,b;            //Program to demonstrate bitwise operations and count set bits
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    printf("Bitwise AND (%d & %d): %d\n", a, b, a & b);
    printf("Bitwise OR (%d | %d): %d\n", a, b, a | b);
    printf("Bitwise XOR (%d ^ %d): %d\n", a, b, a ^ b);
    printf("Left Shift (%d << 1): %d\n", a, a << 1);
    printf("Left Shift (%d << 1): %d\n", b, b << 1);
    printf("Right Shift (%d >> 1): %d\n", a, a >> 1);
    printf("Right Shift (%d >> 1): %d\n", b, b >> 1);    
    int count1 = 0;
    int temp1 = a;
    while(temp1 != 0) 
    {
        count1 += temp1 & 1;
        temp1 = temp1 >> 1;
    }
    printf("Number of set bits in %d: %d\n", a, count1);
    int count2 = 0;
    int temp2 = b;
    while(temp2 != 0) 
    {
        count2 += temp2 & 1;
        temp2 = temp2 >> 1;
    }
    printf("Number of set bits in %d: %d\n", b, count2);
}