#include "cs50.h"
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;
    printf("%d cents\n", cents);
    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;
    printf("%d cents\n", cents);
    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;
    printf("%d cents\n", cents);
    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;
    printf("%d cents\n", cents);
    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    } while (cents < 0);
    return (cents);
}

int calculate_quarters(int cents)
{
    // TODO
    if (cents >= 25 && cents < 50)
        return (1);
    else if (cents >= 50 && cents < 75)
        return (2);
    else if (cents >= 75)
        return (3);
    return 0;
}

int calculate_dimes(int cents)
{
    // TODO
    if (cents >= 10 && cents < 20)
        return (1);
    else if (cents >= 20 && cents < 30)
        return (2);
    else if (cents >= 30)
        return (3);
    return 0;
}

int calculate_nickels(int cents)
{
    // TODO
    if (cents >= 5 && cents < 10)
        return (1);
    else if (cents >= 10 && cents < 15)
        return (2);
    else if (cents >= 15)
        return (3);
    return 0;
}

int calculate_pennies(int cents)
{
    // TODO
    if (cents > 0)
    {
        if (cents == 1)
            return (1);
        else if (cents == 2)
            return (2);
        else if (cents == 3)
            return (3);
        else
            return 4;
    }
    return 0;
}
