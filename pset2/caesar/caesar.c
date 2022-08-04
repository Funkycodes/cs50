#include <stdio.h> // printf()
#include <ctype.h>
#include <string.h>
#include "cs50.h"

int string_to_int(string);
int isnum(string);

int main(int argc, string argv[])
{
    if ((argc != 2) || !(isnum(argv[1])))
    {
        puts("Usage: caesar key(1-9)");
        return (1);
    }
    int key = string_to_int(argv[1]);
    string plain_text = get_string("Plain Text: ");
    int len = strlen(plain_text);
    char cipher_text[len + 1];
    int tmp;

    // for (int i = 0; i < len; i++)
    //     cipher_text[i] = plain_text[i];
    for (int i = 0; i < len; i++)
    {
        tmp = plain_text[i];
        if (isalpha(tmp))
        {
            if (isupper(plain_text[i]))
            {
                tmp = (tmp + key - 'A') % 26;
                tmp += 'A';
            }
            else
            {
                tmp = (tmp + key - 'a') % 26; // c[i] = (p[i] + k) % 26;  
                tmp += 'a';
            }
        }
        cipher_text[i] = tmp;
    }
    cipher_text[len] = '\0';
    printf("Cipher Text: %s", cipher_text);
}
int string_to_int(string s)
{
    int len = strlen(s);
    int num, final;
    num = final = 0;
    for (int i = 0; i < len; i++)
    {
        num = s[i] - '0';
        for (int j = len - (i + 1); j > 0; j--)
        {
            num *= 10;
        }
        final += num;
    }
    return final;
}
int isnum(string s)
{
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (!(isdigit(s[i])))
            return 0;
    }
    return 1;
}