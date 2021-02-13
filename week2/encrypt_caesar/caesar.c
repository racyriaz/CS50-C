#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// predefine my function
int lower_case(int val, int key, int min, int max);

// Getting command line arguments

int main(int argc, string argv[])
{
    // Checking if there was no command line argument along with file name
    if (argc < 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        int key = atoi(argv[1]);

        // checking for invalid command line arguments
        if (key < 1 || argc > 2)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }

        // getting plain text that is to be encrypted
        string p = get_string("plaintext: ");
        printf("ciphertext: ");

        // encrypting with cipher key
        for (int i = 0, n = strlen(p) ; i < n ; i++)
        {
            int ciper = 0;
            // checks if the character is present in lower case alpha
            if (p[i] >= 'a' && p[i] <= 'z')
            {
                ciper = ((p[i] + key) > 122) ? lower_case(p[i], key, 97, 122) : (p[i] + key);
            }
            // checks if the number is in uppercase alpha
            else if (p[i] >= 'A' && p[i] <= 'Z')
            {
                ciper = ((p[i] + key) > 90) ? lower_case(p[i], key, 65, 90) : (p[i] + key);
            }
            // if both dont work out return the same character
            else
            {
                ciper = p[i];
            }
            printf("%c", ciper);
        }

    }
    printf("\n");
    return 0;
}

int lower_case(int val, int key, int min, int max)
{
    while ((((val + key) % max) + min - 1) > max)
    {
        // printf("super function executed");
        val -= 26;
    }
    // printf("%d\n",((val + key) % max)+min-1);
    // printf("function executed\n");
    return (((val + key) % max) + min - 1);
}

