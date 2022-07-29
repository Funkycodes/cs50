#include <stdio.h>
#include "cs50.h"

int _strlen(string);
int main(void)
{
    string card_num = get_string("Enter Card Number: ");
    int length = _strlen(card_num);
    int checker = 0;
    if ((length != 15) && (length != 16) && (length != 13))
    {
        puts("INVALID");
        return (0);
    }
    for (int i = length - 2; i >= 0;)
    {
        int product = ((card_num[i] - '0') * 2);
        if (product >= 10)
            product = (product % 10) + (product / 10);
        checker += product;
        i -= 2;
    }
    for (int i = length - 1; i >= 0;)
    {
        checker += ((card_num[i] - '0'));
        i -= 2;
    }
    if (checker % 10)
    {
        puts("INVALID");
        return (0);
    }

    if ((card_num[0] == '5') && ((card_num[1] == '1') || (card_num[1] == '2') || (card_num[1] == '3') || (card_num[1] == '4') || (card_num[1] == '5')))
        printf("MasterCard");
    else if ((card_num[0] == '3') && ((card_num[1] == '4') || (card_num[1] == '7')))
        printf("AMEX\n");
    else if (card_num[0] == '4')
        printf("VISA\n");
    else
        printf("INVALID\n");

    return 0;
}
int _strlen(string s)
{
    int len = 0;
    while (*s)
    {
        len++;
        s++;
    }
    return len;
}