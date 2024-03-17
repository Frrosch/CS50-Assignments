#include <cs50.h>
#include <math.h>
#include <stdio.h>

int calculate_quarters(int cents);

int calculate_dimes(int cents);

int calculate_nickels(int cents);

int calculate_pennies(int cents);

int main(void)
{
    int cents;

    // Prompt the user for change
    do
    {
        cents = get_int("Change owned: ");
    }
    while (cents <= 0);

    // Take minimum of coins from prompted change
    // Calculate how many quarters you should give customer
    int quarters = calculate_quarters(cents);
    // Subtract the value of those quarters from cents
    cents = cents - (quarters * 25);

    // Calculate how many dimes you should give customer
    int dimes = calculate_dimes(cents);
    // Subtract the value of those dimes from cents
    cents = cents - (dimes * 10);

    // Calculate how many nickels you should give customer
    int nickels = calculate_nickels(cents);
    // Subtract the value of those nickels from cents
    cents = cents - (nickels * 5);

    // Calculate how many pennies you should give customer
    int pennies = calculate_pennies(cents);
    // Subtract the value of those pennies from cents
    cents = cents - (pennies * 1);

    // Sum the number of quarters, dimes, nickels, and pennies used
    int sum = quarters + dimes + nickels + pennies;
    // Print that sum
    printf("%i\n", sum);
}

int calculate_quarters(int cents)
{
    // Calculate how many quarters you should give customer
    int quarters;

    for (quarters = 0; cents >= 25; quarters++)
    {
        // Subtract the value of those quarters from cents
        cents = cents - 25;
    }
    return quarters;
}
int calculate_dimes(int cents)
{
    // Calculate how many dimes you should give customer
    int dimes;

    for (dimes = 0; cents >= 10; dimes++)
    {
        // Substract the value of those dimes from 'remaining' cents
        cents = cents - 10;
    }
    return dimes;
}
int calculate_nickels(int cents)
{
    // Calculate how many nickels you should give customer
    int nickels;

    for (nickels = 0; cents >= 5; nickels++)
    {
        // Substract the value of those nickels from reamining cents
        cents = cents - 5;
    }
    return nickels;
}
int calculate_pennies(int cents)
{
    // Calculate how many pennies you should give customer
    int pennies;

    for (pennies = 0; cents >= 1; pennies++)
    {
        // Substract the value of those nickels from remaining cents
        cents = cents - 1;
    }
    return pennies;
}
