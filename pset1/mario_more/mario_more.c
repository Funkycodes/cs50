#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    } while (height < 1);

    for (int i = 0; i < height; i++)
    {
        for (int j = height - i; j > 1; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        for (int j = height - i; j > 1; j--)
        {
            printf(" ");
        }
        printf("\n");
    }
}