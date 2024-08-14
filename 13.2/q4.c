#include <stdio.h>
void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = i; k > 1; k--)
        {
            printf("  ");
        }

        for (int j = i; j <= 5; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
}