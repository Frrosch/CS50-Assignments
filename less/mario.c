#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // Promt the user for the pyramid's height

    int height, i, j, k = 0;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Print a pyramid of that height

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
        printf("\n");
    }
}
