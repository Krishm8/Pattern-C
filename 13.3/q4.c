#include <stdio.h>
void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = i; k < 5; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for (int j = 5; j > i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}