#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // geting height in range 1 to 8
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while ((height < 1) || (height > 8));

    // printing pyramid
    for (int i = 1; i <= height; ++i)
    {
        // empty space for right aligment
        for (int j = height - 1; j >= i; --j)
        {
            printf(" ");
        }
        // printing # for left side triagle
        for (int j = 1; j <= i; ++j)
        {
            printf("#");
        }
        // for centre space alignment
        printf("  ");
        // printing # for right sie triangle
        for (int j = 1; j <= i ; ++j)
        {
            printf("#");
        }
        // for new line
        printf("\n");
    }
}