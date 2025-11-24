#include<stdio.h>
void main()
{
    int choice, rows, i, j, k, space, coef;     //Menu driven program for various patterns
    do{
        printf("MENU:\n");
        printf("1. Print number pyramid\n");
        printf("2. Print reverse number pyramid\n");
        printf("3. Print Pascal's triangle\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter number of rows: ");
                scanf("%d", &rows);
                for(i = 1; i <= rows; i++) 
                {
                    for(space = 1; space <= rows - i; space++) 
                    {
                        printf("  ");
                    }
                    for(j = 1; j <= i; j++) 
                    {
                        printf("%d ", j);
                    }
                    for(k = i - 1; k >= 1; k--) {
                        printf("%d ", k);
                    }
                    printf("\n");
                }
                break;
                
            case 2:
                printf("Enter number of rows: ");
                scanf("%d", &rows);
                for(i = rows; i >= 1; i--) 
                {
                    for(space = 1; space <= rows - i; space++) 
                    {
                        printf("  ");
                    }
                    for(j = 1; j <= i; j++) 
                    {
                        printf("%d ", j);
                    }
                    for(k = i - 1; k >= 1; k--) 
                    {
                        printf("%d ", k);
                    }
                    printf("\n");
                }
                break;
                
            case 3:
                printf("Enter number of rows: ");
                scanf("%d", &rows);
                for(i = 0; i < rows; i++) 
                {
                    for(space = 1; space <= rows - i; space++) 
                    {
                        printf("  ");
                    }
                    coef = 1;
                    for(j = 0; j <= i; j++) 
                    {
                        printf("%4d", coef);
                        coef = coef * (i - j) / (j + 1);
                    }
                    printf("\n");
                }
                break;
                
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
                
            default:
                printf("Invalid choice! Please enter a number between 1-4.\n");
                break;
        }
    } while(choice != 4);
}