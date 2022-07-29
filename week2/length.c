#include "cs50.h"
#include <stdio.h>

int string_length(string);
int main(void)
{
    string s = get_string("Enter string: ");
    int length = string_length(s);
    printf("Length of entered string is: %i", length);
}
int string_length(string s)
{
    int length = 0;
    while (s[length] != '\0')
    {
        length += 1;
    }
    return length;
}