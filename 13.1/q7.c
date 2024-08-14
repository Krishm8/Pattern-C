#include <stdio.h>
void main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
}