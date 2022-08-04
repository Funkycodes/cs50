#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "cs50.h"

int main(void)
{
    string s = get_string("Before: ");
    int len = strlen(s);
    printf("After: ");
    for (int i = 0; i < len; i++)
    {
        printf("%c", toupper(s[i]));
    }
    return (0);
}