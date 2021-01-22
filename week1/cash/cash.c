#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int count = 0, remaining = 0;
    float dollars;
    // getting dollars owed (positive number)
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);

    // dollars into cents with rounding
    int cents = round(dollars * 100);
    // printf("%d\n",cents);

    if (cents >= 25)
    {
        for (int i = cents; i >= 25; i -= 25)
        {
            ++count;
            remaining = i - 25;
        }
        // printf("quater 25: %d\nremaining:%d\n",count,remaining);
        cents = remaining;

    }
    if (cents < 25 && cents >= 10)
    {
        for (int i = cents ; i >= 10; i -= 10)
        {
            ++count;
            remaining = i - 10;
        }
        // printf("dimes 10: %d\nremaining:%d\n",count,remaining);
        cents = remaining;
    }
    if (cents < 10 && cents >= 5)
    {
        for (int i = cents; i >= 5; i -= 5)
        {
            ++count;
            remaining = i - 5;
        }
        // printf("nickels 5: %d\nremaining:%d\n",count,remaining);
        cents = remaining;
    }
    if (cents < 5 && cents > 0)
    {
        for (int i = cents; i >= 1; i -= 1)
        {
            ++count;
            remaining = i - 1;
        }
        // printf("pennies 1: %d\nremaining:%d\n",count,remaining);
        cents = remaining;
    }

    printf("%d\n", count);

}