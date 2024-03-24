#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long card_number;
    int sum = 0;
    int count = 0;

    // PROMPT THE USER TO GET A CREDİT CARD NUMBER
    do
    {
        card_number = get_long("Please enter your credit card number: ");
    }
    while (card_number <= 0);

    // COUNT THE DİGİTS OF THE GİVEN NUMBER

    // for(int i = count; i <= card_number; i++)
    // {
    //     card_number = card_number / 10;
    //     count++;
    // }
    // printf("%i\n", count);

    // CALCULATE CHECKSUM

    for (long temp = card_number; temp > 0; temp /= 10)
    {
        if (count % 2 == 0)
        {
            sum += temp % 10;
        }
        else
        {
            int digit = 2 * (temp % 10);
            sum += digit / 10 + digit % 10;
        }
        count++;
    }

    // CHECK IF CARD NUMBER IS VALID

    if (sum % 10 == 0)
    {
        while (card_number >= 100)
        {
            card_number /= 10;
        }

        if ((card_number == 34 || card_number == 37) && count == 15)
        {
            printf("AMEX\n");
        }
        else if ((card_number >= 51 && card_number <= 55) && count == 16)
        {
            printf("MASTERCARD\n");
        }
        else if ((card_number / 10 == 4) && (count == 13 || count == 16))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
