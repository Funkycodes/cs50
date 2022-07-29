#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int height = get_int("Height: ");

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
        printf("\n");
    }
}