#include <stdio.h>
void main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 5; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}