#include <stdio.h>
void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int s = i; s >= 1; s--)
        {
            printf(" ");
        }
        for (int j = 5; j >= i; j--)
        {
            if (i == 2 && (j < 5 && j > 2) || i == 3 && (j < 5 && j > 3))
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int s = 5; s >= i; s--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == 3 && (j == 2) || i == 4 && (j > 1 && j < 4))
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}