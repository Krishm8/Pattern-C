#include <stdio.h>
void main()
{
    int l=1;
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 5; k > i; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", l);
            l++;
        }
        printf("\n");
    }
}