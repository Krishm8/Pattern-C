#include <stdio.h>
void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 5 || j == 1 || j == 5)
            {
                printf("* ");
            }
            else if (j == 2 || j == 4 || j == 4)
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}