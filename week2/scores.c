#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int n = get_int("How many scores: ");
    // array declaration
    int score[n];

    // score[0] = get_int("Score: ");
    // score[1] = get_int("Score: ");
    // score[2] = get_int("Score: ");

    for (int i = 0; i < n; i++)
    {
        score[i] = get_int("Score: ");
    }
    printf("Average score: %.2lf", (score[0] + score[1] + score[2]) / 3.0);
}