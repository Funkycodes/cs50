#include <stdio.h>
#include <string.h> // strlen
#include "cs50.h"   // get_string

int main(void)
{
    string s = get_string("String to be measured: ");
    int length = strlen(s);
    printf("The string length is: %d", length);
    return (0);
}