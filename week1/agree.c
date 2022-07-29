#include <stdio.h>
#include "cs50.h"

int main(void)
{
    char c = get_char("Do you agree: ");

    if (c == 'y' || c == 'Y')
    {
        puts("Yes I agree");
    }
    else if (c == 'n' || c == 'N')
    {
        puts("No, I don't agree");
    }
}