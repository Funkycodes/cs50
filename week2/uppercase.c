#include <stdio.h>
#include <string.h>
#include "cs50.h"

void to_uppercase(string);
int main(void)
{
    string s = get_string("String: ");
    to_uppercase(s);
    printf("%s", s);

    return (0);
}
void to_uppercase(string s)
{
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z') // a = 97        {
            s[i] -= 32;
        }
    }
}