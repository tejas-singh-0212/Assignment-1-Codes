#include<stdio.h>
void main()
{               //Program to check perfect number, Armstrong number and print factors
    int n, sum = 0, count = 0, temp, digit, arm_n = 0,i,expo;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        printf("%d is a perfect number\n",n);
    }
    else
    {
        printf("%d is not a perfect number\n",n);
        temp = n;
        while(temp != 0) 
        {
            count++;
            temp /= 10;
        }
        temp = n;
        while(temp != 0) 
        {
            digit = temp % 10;
            expo=1;
            for(i=1;i<=count;i++)
            {
                expo*=digit;
            }
            arm_n += expo;
            temp /= 10;
        }
        if(arm_n==n)
        {
            printf("\n%d is an Armstrong number\n",n);
        }
        else
        {
            printf("\n%d is not an Armstrong number\n",n);
            printf("\n3. Factors of %d are:\n", n);
            for(i=1;i<=n;i++)
            {
                if(n%i==0)
                {
                    printf("%d ",i);
                }
            }
        }
    }
}