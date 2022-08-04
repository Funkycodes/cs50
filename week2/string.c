#include <stdio.h>
#include <string.h>
#include "cs50.h"

int main(void)
{
    string s = get_string("Input:  ");
    int len = strlen(s);
    printf("Output: ");
    // printf("%s\n", s);
    for (int i = 0; i < len; i++)
        printf("%c", s[i]);
    printf("\n");
    return (0);
}