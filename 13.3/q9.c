#include <stdio.h>
void main()
{
    for (int i = 1; i < 5; i++)
    {
        for (int s = 4; s >= i; s--)
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

    for (int i = 4; i >= 1; i--)
    {
        for (int s = 4; s >= i; s--)
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
