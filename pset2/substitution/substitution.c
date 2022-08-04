#include "cs50.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int get_index(char c, string s);
int validate_key(string key);
void substitute(string plain, string cipher, string key);
int main(int argc, string argv[])
{
    string plain;
    string key;
    if (argc != 2)
    {
        puts("Usage: ./substitution key");
        return (1);
    }
    else if (strlen(argv[1]) != 26)
    {
        puts("Key must contain 26 characters");
        return (1);
    }
    else if (validate_key(argv[1]) == 1)
    {
        puts("Key must include only numeric characters");
        return (1);
    }
    else if (validate_key(argv[1]) == 2)
    {
        puts("Key must not include duplicate characters");
        return (1);
    }
    plain = get_string("Plain text: ");
    char cipher[strlen(plain) + 1];
    key = argv[1];
    substitute(plain, cipher, key);
    printf("Cipher Text: %s", cipher);
}
int get_index(char c, string s)
{
    int len = strlen(s);
    int i = 0;
    for (; i < len; i++)
    {
        if (s[i] == c)
            return i;
    }
    return -1;
}
int validate_key(string key)
{
    int len = strlen(key);
    int tmp;
    string ascii = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int count[26] = {0};
    for (int i = 0; i < len; i++)
    {
        if (!(isalpha(key[i])))
            return 1;
        else
        {
            tmp = get_index(key[i], ascii);
            count[tmp]++;
            if (count[tmp] > 1)
                return 2;
        }
    }
}
void substitute(string plain, string cipher, string key)
{
    int len = strlen(plain);
    string ascii = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int tmp;
    for (int i = 0; i < len; i++)
    {
        char c = plain[i];
        if (isupper(plain[i]))
        {
            tmp = get_index(plain[i], ascii);
            cipher[i] = key[tmp];
        }
        else
        {
            tmp = get_index(toupper(plain[i]), ascii);
            cipher[i] = tolower(key[tmp]);
        }
    }
    cipher[len] = '\0';
}