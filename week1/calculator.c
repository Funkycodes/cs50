#include <stdio.h>
#include "cs50.h"

int main(void)
{
    // Prompt user for x
    long long x = get_long("x: ");

    // Prompt user for y
    long long y = get_long("y: ");

    // Perform addition
    long long z = x + y;
    printf("%lli", z);

    return (0);
}