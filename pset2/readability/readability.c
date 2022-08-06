#include <stdio.h>  // puts, printf
#include <string.h> // strlen
#include <ctype.h>  //isalpha
#include "cs50.h"
#include <math.h>
// prototypes
int count_words(string);
int count_letters(string);
int count_sentence(string s);
float average_per_hunnid(int word, int other);

int main(void)
{
    string text;
    float s, l, index;
    int w;

    text = get_string("Text: ");
    w = count_words(text);
    s = count_sentence(text);
    l = count_letters(text);
    printf("%.0f letters\n%d words\n%.0f sentences\n", l, w, s);

    index = 0.0588 * average_per_hunnid(w, l) - 0.3 * average_per_hunnid(w, s) - 15.8;
    index = round(index);

    if (index < 1.0f)
        printf("Before ");
    if (index < 1.0f)
        index = 1;
    printf("Grade %.2f", round(index));
    if (index > 16.0f)
        printf("+");
    printf("\n");
    return (0);
}
float average_per_hunnid(int word, int other)
{
    float avg = (100 / (float)word) * other;
    return (avg);
}
int count_words(string s)
{
    int word_count = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if ((i != 0) && (s[i] == ' ') && (isalpha(s[i - 1]) || s[i - 1] == ',') && (s[i + 1] != ' '))
        {
            word_count++;
        }
        if (((s[i + 1] == '\0') && (s[i] != ' ')) ||
            (s[i] == '.' || s[i] == '?' || s[i] == '!'))
            word_count++;
    }
    return word_count;
}
int count_letters(string s)
{
    int letter_count = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (isalpha(s[i]))
            letter_count++;
    }
    return (letter_count);
}
int count_sentence(string s)
{
    int sentence_count = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if ((s[i] == '.') || (s[i] == '?') || (s[i] == '!'))
            sentence_count++;
    }
    return (sentence_count);
}