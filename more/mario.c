#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, i, j, k;

    // Prompt the user for the height of the pyramid

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Print left , right-alligned pyramid

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }
        for (k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        // Give a space between two pyramids

        printf("  ");

        // Print right, left-alligned pyramid

        for (k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
