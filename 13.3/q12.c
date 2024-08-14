#include <stdio.h>
void main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 1 || i == 3)
        {
            printf("* * * * *");
        }
        else
        {
            printf("*       *");
        }
        printf("\n");
    }
}