#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start = 0, end = 0, years = 0, n = 0;

    // TODO: Prompt for start size
    do
    {
        start = get_int("Start Size: ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    do
    {
        end = get_int("End Size: ");
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold
    n = start;
    while (n < end)
    {
        n = n + (n / 3) - (n / 4);
        years++;
    }
    // TODO: Print number of years
    printf("Years: %d\n", years);
}